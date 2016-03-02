#include <stdio.h>
#include <stdlib.h>
#include "outputformatting.h"
#include "cunit.h"

int main(){
	/*Declare variables*/
	char *sret = (char *)malloc(1024);

	/*Test complex root output*/
	sret = formatoutput(0, 1, 2, 3, 25, 25);
	assert_streq("Error validating root output", sret, "");
	

	/*Test double root output*/
	sret = formatoutput(1, 1, 2, 3, 25, 25);
	assert_streq("Error validating root output", sret, "");

	/*Test 2 roots output*/
	sret = formatoutput(2, 1, 2, 3, 25, 25);
	assert_streq("Error validating root output", sret, "");

	return 0;
}