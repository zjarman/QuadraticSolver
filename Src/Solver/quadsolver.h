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
double evalQuadEquation1(double a, double b, double discriminate);

/*
	Function evalQuadEquation1:
	This function will evaluate the quadratic solution on passed a, b, and
	discriminate

	Parameters: a - double, b - double, disciminate - double

	Returns: double which is the solution to the equation
*/
double evalQuadEquation2(double a, double b, double discriminate);

/*
	Function quadsolver:
	This function will run the quadsolver program

	Parameters: none

	Returns: a 2 element array signifying the returned root values. both
	being zero signifies a complex root
*/
double * quadsolver();