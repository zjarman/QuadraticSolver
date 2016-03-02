#include <stdio.h>
#include "sqrt.h"
#include "cunit.h"

int main(){
	/*Declare variables*/
	double val = 23;

	/*initialize the unit testing framework*/
	cunit_init();

	/*Test sqrt output*/
	assert_feq("The sqrt value is not equal to correct value", mysqrt(val), 4.7958315233127191);

	/*Verify returned value is within error...*/
	assert_feqrerr("Sqrt Error Range",mysqrt(val), 4.7958315233127191, 10.0*cunit_dmacheps );

	return 0;
}