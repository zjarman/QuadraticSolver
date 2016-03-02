#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * sret = (char*)calloc(1,1024);

/*Prototypes*/
const char * formatoutput(short type, double a, double b, double c, double answer1, double answer2);

const char * formatoutput(short type, double a, double b, double c, double answer1, double answer2){
	/*Declare variables*/
	//char sret[1024] = {""};

	/*Format output depending on passed type*/
	switch(type){
		case 0:
			printf("Before sprintf\n");
			sprintf(sret,"There are only complex solutions to the quadratic values you passed: a = %lf, b = %lf, c = %lf", a, b, c);
			sret[strlen(sret)+1] = '\0';
			printf("after sret\n");
			printf("After percent s");
			break;
		case 1:
			sprintf(sret,"There is a double root solution = %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, a, b, c);
			printf("%s", sret);
			break;
		case 2:
			sprintf(sret,"There are 2 root solutions = %lf, %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, answer2, a, b, c);
			printf("%s", sret);
			break;
	}
	printf("about to exit with value");
	return &sret[0];
}