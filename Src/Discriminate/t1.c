/*Test returned discriminate value*/


#include <stdio.h>
#include "discriminate.h"

/*Prototypes*/
double discriminateVal(double a, double b, double c);
short discriminateRoots(double a, double b, double c);

int main(){
	double a = 1, b = 4, c = 1;

	/*Test discriminate roots code returned*/
	printf("The disciminate root code is: %d\n",discriminateRoots(a, b, c));

	/*Test discriminate value returned*/
	printf("The discriminate value is: %lf\n",discriminateVal(a, b, c));

	return 0;
}
