/*Test returned discriminate value*/


#include <stdio.h>
#include "discriminate.h"
#include "cunit.h"

/*Prototypes*/
double discriminateVal(double a, double b, double c);
short discriminateRoots(double a, double b, double c);

int main(){
	/*Declare variables*/
	int rootCodeRet = 0;
	double discrValRet = 0;

	/*initialize the unit testing framework*/
	cunit_init();

	double a = 1, b = 4, c = 1;

	/*Bad Unit Test - Returned Discriminate Code Not Correct
	rootCodeRet = discriminateRoots(a, b, c);
	assert_eq("Discriminate Root Code Return", rootCodeRet, 0);*/

	/*Bad Unit Test - Returned Discriminate Value Not Correct
	discrValRet = discriminateVal(a, b, c);
	assert_feq("Discriminate Value Return", discrValRet, 2.0);*/

	
	/*Good Unit Test - Returned Discriminate Code is Correct*/
	rootCodeRet = discriminateRoots(a, b, c);
	assert_eq("Discriminate Root Code Return", rootCodeRet, 2);

	/*Good Unit Test - Returned Discriminate Value is Correct*/
	discrValRet = discriminateVal(a, b, c);
	assert_feq("Discriminate Value Return", discrValRet, 12.0);

	/*Test for error within returned discriminate value*/
	a = 1.2455; b = 2.4555; c = 1.2455;
	discrValRet = discriminateVal(a, b, c);
	assert_feqrerr("Discriminate Error Range",discrValRet, -.178056, 10.0*cunit_dmacheps );

	return 0;
}
