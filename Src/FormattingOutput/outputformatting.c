#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
char *formatoutput(short type, double a, double b, double c, double answer1, double answer2);

char  *formatoutput(short type, double a, double b, double c, double answer1, double answer2){
	/*Declare variables*/
	char *sret = (char*)malloc(1024);

	/*Format output depending on passed type*/
	switch(type){
		case 0:
			printf("There are only complex solutions to the quadratic values you passed: a = %lf, b = %lf, c = %lf\n", a, b, c);
			sprintf(sret,"There are only complex solutions to the quadratic values you passed: a = %lf, b = %lf, c = %lf\n", a, b, c);
			printf("The value of sret = %s\n", sret);
			break;
		case 1:
			printf("There is a double root solution = %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, a, b, c);
			sprintf(sret,"There is a double root solution = %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, a, b, c);
			printf("The value of sret = %s\n", sret);
			break;
		case 2:
			printf("There are 2 root solutions = %lf, %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, answer2, a, b, c);
			sprintf(sret,"There are 2 root solutions = %lf, %lf to the quadratic values your passed: a = %lf, b = %lf, c = %lf\n", answer1, answer2, a, b, c);
			printf("The value of sret = %s\n", sret);
			break;
	}
	return sret;
}