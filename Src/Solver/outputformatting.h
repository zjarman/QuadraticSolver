#include <stdio.h>


/*
	Function formatoutput:
	This function will format the past values into a readable format then print to
	user via command line

	Parameters: type - short which is 0 for complex, 1 for double root, 2 for 2 roots,
	a - double, b - double, c - double, answer1 - double, answer2 - double

	Returns: nothing
*/
char *formatoutput(short type, double a, double b, double c, double answer1, double answer2);