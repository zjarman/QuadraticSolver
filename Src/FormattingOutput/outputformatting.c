#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*Prototypes*/
char * formatoutput(short type, double a, double b, double c, double answer1, double answer2);

char * formatoutput(short type, double a, double b, double c, double answer1, double answer2){
	/*Declare variables*/
	char *sret = malloc(1024);

	/*Format output depending on passed type*/
	switch(type){
		case 0:
			sprintf(sret,"There are only complex solutions to the quadratic values you passed: a = %lf, b = %lf, c = %lf", a, b, c);
			break;
		case 1:
			sprintf(sret,"There is a double root solution = %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, a, b, c);
			break;
		case 2:
			sprintf(sret,"There are 2 root solutions = %lf, %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, answer2, a, b, c);
			break;
	}
	return sret;
}