#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sqrt.h"

/*
	Function main:
	This function will accept 3 values from the user (a, b, and c).  Valid inputs
	include any number including NAN, INF, and -INF.  The 3 sqrt functions will
	take the square root of each function separately, then together to show how
	the rounding is done.
*/
long double sqrt_longdouble(QuadVals *quadVals){
	/*Declare variables*/
	long double a = quadVals->a, b = quadVals->b, c = quadVals->c;

	/*Notify user of test case coming*/
	printf("Test cases for all sqrt functions will follow\n\n");

	/*Test values with float square root function*/
	return = sqrtLongDouble(a, b, c);
}

/*Sqrt Long Double function*/
long double sqrtLongDouble(long double a, long double b, long double c){
	/*Declare local variables*/
	long double result = 0.0f;

	/*Run square root function on individual values*/
	printf("The value of a is %LG before square root long double function\n", a);
	result = sqrt(a);
	printf("The result of the function on a is: %LG\n\n", result);

	printf("The value of b is %LG before square root long double function\n", b);
	result = sqrt(b);
	printf("The result of the function on b is: %LG\n\n", result);

	printf("The value of c is %LG before square root long double function\n", c);
	result = sqrt(c);
	printf("The result of the function on c is: %LG\n\n", result);

	/*Run square root function on individual values multiplied together*/
	result = a * b * c;
	printf("The value of a * b * c is: %LG\n\n\n", result);
}
