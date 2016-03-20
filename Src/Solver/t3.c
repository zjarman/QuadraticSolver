/*
* t3.c
* Unit tests for quadsolver()
* quadsolver() solves a * x^2 + b x + c = 0
*   for the roots
* x1 and x2
* 
* This uses the mock discriminateVal() function in mock_discriminate.c,
* which does not call discriminateVal()
*
* Both of these unit test pass. For examples, it's more fun to 
* make them fail.
*/
#include <stdio.h>
#include <stdlib.h>
#include "cunit.h"
#include "mock_discriminate.h"
#include "quadsolver.h"


int main() {
Coef	coefs;   // a, b and c for the quadratic eqaution
int	ret; 
double *roots;    // return value from quadsolver
double  a, b, c; // scratch variables
double  x1, x2;  // scratch variables
int	count;	 // number of times the mock object discriminateVal(0 is called.
double	x;	 // arguement passed to discriminateVal()
char	str[100];// messsaage for assert() 
double	d;	 // scratch for discriminate


// initialize the unit testing framework
cunit_init();

//  A single test using the mock object for discriminateVal()
//  Should have x1 = 3.0 and x2 = 1.0, except for roundoff
//   We expect  d =  b^2 - 4*a*c =  4.0
//  In this special case we will try to have the error actually == 0.0.,
//  both in the discriminateVal(a, b, c) mock object and for the returned roots!
//  This is not often the case.
mock_setup_discriminateVal( 4.0, 2.0, 0.0);
//
//// This looks like a check of discriminateVal()
coefs.a = 1.0;
coefs.b = -4.0;
coefs.c = 3.0;

/*Notify user what values to enter for a successful test*/
printf("\nFor an unsuccessful test, enter these values: a = 1, b = -4, c = 3\n");

roots = quadsolver();
assert_feq("x1",roots[0],3.0);
assert_feq("x2",roots[1],1.0);
//
ret = mock_check_discriminateVal( &count, &x);
snprintf(str, 99, "count ret = %d x =%20.61e", count, x);
assert_eq(str, ret , 1);


//
// A "good" unit test, need to allow for round off!
// discriminateVal() passes this one. ;-)
// This allows about one base 10 least significant digit of error
// (x - x1)*(x - x2) = 0
x1 = 3.1;
x2 = 3.3;
a = coefs.a = 1.0;
b = coefs.b = -x1 + -x2;
c = coefs.c = x1*x2;

d = b*b - 4.0*a*c;

//
mock_setup_discriminateVal( d, d, cunit_dmacheps*2.0*d);

/*Notify user what values to enter for a successful test*/
printf("\nFor a successful test, enter these values: a = 1, b = -6.4, c = 10.23\n");

roots = quadsolver();
assert_feqrerr("x1",roots[0], x2, 2.0*cunit_dmacheps*3.3 );
assert_feqrerr("x2",roots[1], x1, 2.0*cunit_dmacheps*3.1 );
//
ret= mock_check_discriminateVal( &count, &x);
snprintf(str, 99, "count ret = %d x =%20.61e", count, x);
assert_eq(str, ret , 1);

exit(0);
}

