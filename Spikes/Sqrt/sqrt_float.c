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
float sqrt_float(QuadVals *quadVals){
	/*Declare variables*/
	float a = quadVals->a, b = quadVals->b, c = quadVals->c;

	/*Notify user of test case coming*/
	printf("Test cases for all sqrt functions will follow\n\n");

	/*Test values with float square root function*/
	return sqrtFloat(a, b, c);
}

/*Sqrt Float function*/
float sqrtFloat(float a, float b, float c){
	/*Declare local variables*/
	float result = 0.0f;

	/*Run square root function on individual values*/
	printf("The value of a is %f before square root float function\n", a);
	result = sqrt(a);
	printf("The result of the function on a is: %f\n\n", result);

	printf("The value of b is %f before square root float function\n", b);
	result = sqrt(b);
	printf("The result of the function on b is: %f\n\n", result);

	printf("The value of c is %f before square root float function\n", c);
	result = sqrt(c);
	printf("The result of the function on c is: %f\n\n", result);

	/*Run square root function on individual values multiplied together*/
	result = a * b * c;
	printf("The value of a * b * c is: %f\n\n\n", result);

	return result;
}
