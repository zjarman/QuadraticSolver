#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cunit.h"
#include "input.h"

char * getUserInput(char * string2user);

int main(){
	/*Declare variables*/
	char *comp = "4";
	char *promptString = "Please enter a value: ";
	char *userInputReturn = (char *)malloc(BUFFERSIZE);
	int i = 0;

	/*initialize the unit testing framework*/
	cunit_init();

	/*Get user input*/
	userInputReturn = getUserInput(promptString);

	/*Replace first \n with null terminator for later comparison*/
	userInputReturn[strcspn(userInputReturn,"\n")] = '\0';

	/*Make comparison and place \n back to userInputReturn variable*/
	i = strcmp(comp, userInputReturn);
	userInputReturn[strcspn(userInputReturn,"\n")] = '\n';
	assert_eq("Input not in correct format", i, 0);

	return 0;
}