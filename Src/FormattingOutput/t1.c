#include <stdio.h>
#include <stdlib.h>
#include "outputformatting.h"
#include "cunit.h"

int main(){
	/*Declare variables*/
	

	/*Test complex root output*/
	char *sret = formatoutput(0, 1, 2, 3, 25, 25);
	printf("Made it out of validating 0");
	assert_streq("Error validating root output", sret, "");

	/*Test double root output*/
	//sret = ;
	assert_streq("Error validating root output", formatoutput(1, 1, 2, 3, 25, 25), "");

	/*Test 2 roots output*/
	//sret = ;
	assert_streq("Error validating root output", formatoutput(2, 1, 2, 3, 25, 25), "");

	return 0;
}