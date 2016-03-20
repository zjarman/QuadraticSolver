/*mock_sqrt.h*/

/*
This mock_sqrt.h and mock_sqrt.c provides a mock object for
the custom mysqrt() function.
*/

/*
Create Coefs struct needed in unit testing
*/
typedef struct{
	double a;
	double b;
	double c;
}Coef;

/*Initialize to expect 1 call to mysqrt()*/
void mock_setup_mysqrt(double lx, double lsqrtx, double leps);

/*Check the results*/
int mock_check_mysqrt(int *lcount,  double *lx);

/*Reset internal values to the start state*/
void mock_teardown_mysqrt();