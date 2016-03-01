#define BUFFERSIZE 1024 /*Max user input char size*/

/*
	Function getUserInput:
	This function will use fgets to get input string from user.  The passed string2user
	variable will be what's displayed to the user

	Parameters: string2user - char* and what user will see on command line

	Returns: char* which is the value asked of the user from the user
*/
char * getUserInput(char * string2user);