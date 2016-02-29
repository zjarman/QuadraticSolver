#include <stdio.h>
#include "sqrt.h"

int main(){
	double val = 23;

	/*Test sqrt output*/
	printf("This is the returned square root value of %lf is the value: %lf\n", val, mysqrt(val));

	return 0;
}