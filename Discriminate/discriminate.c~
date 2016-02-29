#include <stdio.h>
#include "discriminate.h"

double discriminateVal(double a, double b, double c){
	/*Evaluate discriminate and return to calling function*/
	return (double)((b * b) - 4*a*c);
}


short discriminateRoots(double a, double b, double c){
	/*Declare variables*/
	double discriminate = 0;
	short iret = 0;

	/*Get evaluated discriminate*/
	discriminate = discriminateVal(a, b, c);

	/*Analyze discrimninate and return 0 (complex roots), 1 (double root), 
	or 2 (2 roots) to calling function*/
	if(discriminate > 0){
		/*There will be 2 real roots*/
		iret = TWOROOTS;
	}else if(discriminate = 0){
		/*There will be 1 double root*/
		iret = DOUBLEROOT;
	}else{
		/*There will be complex roots*/
		iret = COMPLEX;
	}

	/*Return code to calling function*/
	return iret;
}