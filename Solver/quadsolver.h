#include <stdio.h>
#include <math.h>
#include "sqrt.h"

/*
	Function evalQuadEquation1:
	This function will evaluate the quadratic solution on passed a, b, and
	discriminate

	Parameters: a - double, b - double, disciminate - double

	Returns: double which is the solution to the equation
*/
double evalQuadEquation1(double a, double b, double discriminate){
	return (double)(((-1 * b) + sqrt(discriminate)) / (2*a));
}

/*
	Function evalQuadEquation1:
	This function will evaluate the quadratic solution on passed a, b, and
	discriminate

	Parameters: a - double, b - double, disciminate - double

	Returns: double which is the solution to the equation
*/
double evalQuadEquation2(double a, double b, double discriminate){
	return (double)(((-1 * b) - sqrt(discriminate)) / (2*a));
}