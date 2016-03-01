#include <stdio.h>

/*Defines*/
#define COMPLEX 0
#define DOUBLEROOT 1
#define TWOROOTS 2

/*
	Function discriminateVal:
	This function will evaluate the discriminate b^2 - 4ac and return the value to the
	callin function

	Parameters: a - double, b - double, c - double

	Returns: double which is the value of the discriminate
*/
double discriminateVal(double a, double b, double c);

/*
	Function discriminateRoots:
	This function will determine the number of roots the solution will have by
	analyzing the discriminate's value

	Parameters: a - double, b - double, c - double

	Returns: int which will be either 0, 1, or 2 which means complex roots, double
	root, or 2 roots respectively
*/
short discriminateRoots(double a, double b, double c);