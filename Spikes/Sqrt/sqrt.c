#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Prototypes*/
void sqrtFloat(double a, double b, double c);
void sqrtDouble(double a, double b, double c);
void sqrtLongDouble(double a, double b, double c);

/*
	Function main:
	This function will accept 3 values from the user (a, b, and c).  Valid inputs
	include any number including NAN, INF, and -INF.  The 3 sqrt functions will
	take the square root of each function separately, then together to show how
	the rounding is done.
*/
int main(int argc, char *argv[]){
	/*Declare variables*/
	double a = 0, b = 0, c = 0;

	/*Allow the user to enter values for a, b, and c*/
	printf("Please enter a value for a: ");
	scanf("%lf", &a);
	
	printf("\nPlease enter a value for b: ");	
	scanf("%lf", &b);
	
	printf("\nPlease enter a value for c: ");
	scanf("%lf", &c);

	/*Notify user of test case coming*/
	printf("Test cases for all sqrt functions will follow\n\n");

	/*Test values with float square root function*/
	sqrtFloat(a, b, c);

	/*Test values with float square root function*/
	sqrtDouble(a, b, c);

	/*Test values with float square root function*/
	sqrtLongDouble(a, b, c);

	return 0;
}

/*Sqrt Float function*/
void sqrtFloat(double a, double b, double c){
	/*Declare local variables*/
	float result = 0.0f;

	/*Run square root function on individual values*/
	printf("The value of a is %lf before square root float function\n", a);
	result = sqrt(a);
	printf("The result of the function on a is: %f\n\n", result);

	printf("The value of b is %lf before square root float function\n", b);
	result = sqrt(b);
	printf("The result of the function on b is: %f\n\n", result);

	printf("The value of c is %lf before square root float function\n", c);
	result = sqrt(c);
	printf("The result of the function on c is: %f\n\n", result);

	/*Run square root function on individual values multiplied together*/
	result = a * b * c;
	printf("The value of a * b * c is: %f\n\n\n", result);
}

/*Sqrt Double function*/
void sqrtDouble(double a, double b, double c){
	/*Declare local variables*/
	double result = 0.0f;

	/*Run square root function on individual values*/
	printf("The value of a is %lf before square root double function\n", a);
	result = sqrt(a);
	printf("The result of the function on a is: %lf\n\n", result);

	printf("The value of b is %lf before square root double function\n", b);
	result = sqrt(b);
	printf("The result of the function on b is: %lf\n\n", result);

	printf("The value of c is %lf before square root double function\n", c);
	result = sqrt(c);
	printf("The result of the function on c is: %lf\n\n", result);

	/*Run square root function on individual values multiplied together*/
	result = a * b * c;
	printf("The value of a * b * c is: %lf\n\n\n", result);
}

/*Sqrt Long Double function*/
void sqrtLongDouble(double a, double b, double c){
	/*Declare local variables*/
	long double result = 0.0f;

	/*Run square root function on individual values*/
	printf("The value of a is %lf before square root long double function\n", a);
	result = sqrt(a);
	printf("The result of the function on a is: %LG\n\n", result);

	printf("The value of b is %lf before square root long double function\n", b);
	result = sqrt(b);
	printf("The result of the function on b is: %LG\n\n", result);

	printf("The value of c is %lf before square root long double function\n", c);
	result = sqrt(c);
	printf("The result of the function on c is: %LG\n\n", result);

	/*Run square root function on individual values multiplied together*/
	result = a * b * c;
	printf("The value of a * b * c is: %LG\n\n\n", result);
}