#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "outputformatting.h"
#include "cunit.h"

int main(){
	/*Declare variables*/
	char *comp = "There are only complex solutions to the quadratic values you passed: a = 1.000000, b = 2.000000, c = 3.000000";
	char *temp = (char *)malloc(1024);
	int i = 0;

	/*initialize the unit testing framework*/
	cunit_init();

	/*Test complex root output*/
	temp = formatoutput(0, 1, 2, 3, 25, 25);
	temp[strcspn(temp,"\n")] = '\0';
	/*Make comparison and place \n back to userInputReturn variable*/
	i = strcmp(comp, temp);
	temp[strcspn(temp,"\0")] = '\n';
	assert_eq("Error validating complex root output", i, 0);

	/*Test double root output*/
	bzero(temp, 1024);
	comp = "There is a double root solution = 25.000000 to the quadratic values your passed: a = 1.000000, b = 2.000000, c = 3.000000";
	temp = formatoutput(1, 1, 2, 3, 25, 25);
	temp[strcspn(temp,"\n")] = '\0';
	/*Make comparison and place \n back to userInputReturn variable*/
	i = strcmp(comp, temp);
	temp[strcspn(temp,"\0")] = '\n';
	assert_eq("Error validating double root output", i, 0);
	
	/*Test 2 roots output*/
	bzero(temp, 1024);
	comp = "There are 2 root solutions = 25.000000, 25.000000 to the quadratic values your passed: a = 1.000000, b = 2.000000, c = 3.000000";
	temp = formatoutput(2, 1, 2, 3, 25, 25);
	temp[strcspn(temp,"\n")] = '\0';
	/*Make comparison and place \n back to userInputReturn variable*/
	i = strcmp(comp, temp);
	temp[strcspn(temp,"\0")] = '\n';
	assert_eq("Error validating 2 roots output", i, 0);

	return 0;
}