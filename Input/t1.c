#include <stdio.h>
#include <stdlib.h>
#include "input.h"

char * getUserInput(char * string2user);

int main(){
	/*Declare variables*/
	char *promptString = "Please enter a value: ";
	char *userInputReturn = (char *)malloc(BUFFERSIZE);

	userInputReturn = getUserInput(promptString);

	printf("The user's returned value is - %s\n", userInputReturn);

	/*free(userInputReturn);*/

	return 0;
}