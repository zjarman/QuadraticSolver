#include <stdio.h>
#include <stdlib.h>
#include "cunit.h"
#include "quadsolver.h"

int main(){
	/*Declare variables*/
	double *dret = (double*)calloc(2,sizeof(double));

	/*initialize the unit testing framework*/
	cunit_init();

	/*Test complex root*/
	/*a = 5, b = 1, c = 5; for user to enter*/
	printf("\nEnter these values to test complex root: a = 5, b = 1, c = 5\n");
	dret = quadsolver();
	assert_feq("Incorrect Complex Root", dret[0], 0.0);
	assert_feq("Incorrect Complex Root", dret[1], 0.0);

	/*Test double root*/
	/*a = 1; b = 2; c = 1; for user to enter*/
	printf("\nEnter these values to test double root: a = 1, b = 2, c = 1\n");
	dret = quadsolver();
	assert_feq("Incorrect Double Root", dret[0], -1.0);
	assert_feq("Incorrect Double Root", dret[1], -1.0);

	/*Test 2 roots*/
	/*a = 1; b = 2; c = -8; for user to enter*/
	printf("\nEnter these values to test 2 roots: a = 1, b = 2, c = -8\n");
	dret = quadsolver();
	assert_feq("Incorrect Double Root", dret[0], 2.0);
	assert_feq("Incorrect Double Root", dret[1], -4.0);

	/*Test answers are within error range*/
	/*a = */
	printf("\nEnter these values to test 2 roots error range: a = 1, b = 3, c = 1\n");
	dret = quadsolver();
	assert_feqrerr("Quadratic Solver Error Range", dret[0], -0.3819660112501051, 10.0*cunit_dmacheps );
	assert_feqrerr("Quadratic Solver Error Range", dret[1], -2.618033988749895, 10.0*cunit_dmacheps );
}