#include <stdio.h>
#include <stdlib.h>
#include "input.h"


char * getUserInput(char *string2user){
	/*Declare variables*/
	char *sret = (char *)malloc(BUFFERSIZE);

	/*Display prompt to user*/
	printf("\n%s", string2user);

	/*Get user input*/
	fgets(sret, BUFFERSIZE, stdin);

	/*Return user input to calling function*/
	return sret;
}