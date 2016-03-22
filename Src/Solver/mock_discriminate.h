/*mock_discriminate.h*/

/*
This mock_discriminate.h and mock_discriminate.c provides a mock object for
the custom discriminateVal() function.
*/

/*
Create Coefs struct needed in unit testing
*/
typedef struct{
	double a;
	double b;
	double c;
}Coef;

/*Initialize to expect 1 call to discriminateVal()*/
void mock_setup_discriminateVal(double lx, double lsqrtx, double leps);

/*Check the results*/
int mock_check_discriminateVal(int *lcount,  double *lx);

/*Reset internal values to the start state*/
void mock_teardown_discriminateVal();