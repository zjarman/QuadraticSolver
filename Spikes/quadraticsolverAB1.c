#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Setup prototypes
double evalDiscriminate(double a, double b, double c);
double evalQuadEquation1(double a, double b, double discriminate);
double evalQuadEquation2(double a, double b, double discriminate);

int main(int argc, char* argv[]){
	//Declare local variables and convert passed values to int and set to a, b, and c for quadratic equation
	char *answerRet = malloc(100), *str = malloc(100);
	double a = atof(argv[1]), b = atof(argv[2]), c = atof(argv[3]), discriminate = 0, answer1 = 0, answer2 = 0;
	printf("I received %i arguments and a = %lf, b = %lf, c = %lf...\n", argc, a, b , c);

	//Find discriminate (b^2 - 4ac)
	discriminate = evalDiscriminate(a, b, c);
	printf("The discriminate equals %lf...\n", discriminate);

	/*
	   If discriminate > 0, there are 2 real roots
	   If discriminate = 0, there is a double root
	   If discriminate is less than zero, then there wil be 2 complex conjugates
	*/

	if(discriminate > 0){
		//There will be 2 real roots
		answer1 = evalQuadEquation1(a, b, discriminate);
		sprintf(str, "%lf", answer1);
		strcat(answerRet, str);
		
		strcat(answerRet, ";");

		answer2 = evalQuadEquation2(a, b, discriminate);
		sprintf(str, "%lf", answer2);
		strcat(answerRet, str);

		//Print answer to user
		printf("The answer to your quadratic equation is %s\n", answerRet);
	}else if(discriminate = 0){
		//There will be 1 double root
		answer1 = evalQuadEquation1(a, b, discriminate);
		sprintf(str, "%lf", answer1);
		strcat(answerRet, str);
		
		strcat(answerRet, ";");
		
		answer2 = evalQuadEquation2(a, b, discriminate);
		sprintf(str, "%lf", answer2);
		strcat(answerRet, str);

		//Print answer to user
		printf("The answer to your quadratic equation is %s\n", answerRet);
	}else{
		printf("\n There are 2 complex conjugate roots for your answer...\n");
	}

	free(answerRet);
	free(str);
	return 0;
}

//Evaluate the discriminate
double evalDiscriminate(double a, double b, double c){
	return (double)((b * b) - 4*a*c);
}

//Evaluate quadratic equation (+ discriminate passed in as value)
double evalQuadEquation1(double a, double b, double discriminate){
	return (double)(((-1 * b) + sqrt(discriminate)) / 2*a);
}

//Evaluate quadratic equation (- discriminate passed in as value)
double evalQuadEquation2(double a, double b, double discriminate){
	return (double)(((-1 * b) - sqrt(discriminate)) / 2*a);
}