#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "discriminate.h"
#include "quadsolver.h"
#include "outputformatting.h"

/*Prototypes*/
double evalQuadEquation1(double a, double b, double discriminate);
double evalQuadEquation2(double a, double b, double discriminate);

int main(){
	/*Declare variables*/
	double a = 0, b = 0, c = 0, answer1 = 0, answer2 = 0;

	/*Get a from user*/
	a = atof(getUserInput("Please enter your 'a' value:"));
	
	/*Get b from user*/
	b = atof(getUserInput("Please enter your 'b' value:"));
	
	/*Get c from user*/
	c = atof(getUserInput("Please enter your 'c' value:"));
	

	/*Determine discriminate code - 0, 1, 2; complex roots, double root, 2 roots*/
	switch(discriminateRoots(a, b, c)){
		case COMPLEX:
			/*Notify user that there are no real roots, but only complex roots*/
			formatoutput(0, a, b, c, answer1, answer2);
			break;
		case DOUBLEROOT:
			/*Evalutate quadratic equation to get 1 double root*/
			answer1 = evalQuadEquation1(a, b, discriminateVal(a, b, c));
			formatoutput(1, a, b, c, answer1, answer2);
			break;
		case TWOROOTS:
			/*Evalutate quadratic equation twice to get 2 roots*/

			answer1 = evalQuadEquation1(a, b, discriminateVal(a, b, c));
			answer2 = evalQuadEquation2(a, b, discriminateVal(a, b, c));
			formatoutput(2, a, b, c, answer1, answer2);
			break;
	}

	#ifdef DEBUG
	printf("\nDEBUG INFO\n----------\n");
	printf("Value of a entered was: %lf\n", a);
	printf("Value of b entered was: %lf\n", b);
	printf("Value of c entered was: %lf\n", c);
	printf("The discriminate was: %lf\n", discriminateVal(a, b, c));
	printf("The square root of the discriminate was: %lf\n", sqrt(discriminateVal(a,b,c)));
	if(discriminateRoots(a,b,c) ==2)
		printf("There were two roots\n");
	else if(discriminateRoots(a,b,c) ==1)
		printf("There was a double root\n");
	else
		printf("There were complex solutions\n");
	printf("----------\n");
	#endif
	return 0;
}
