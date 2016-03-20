#include <math.h>
#include "mock_discriminate.h"
#include "discriminate.h"

static double x     = -1.0;  // actual arguement passed to discriminateVal()
static double ex    = -1.0;  // expected argument x to discriminateVal()
static double err   = -1.0;  // absolute error allowed in x
static double discrmx = -1.0;  // result to return from discriminateVal(), b^2 - 4ac
static int    count = 0;     // actual count of calls to discriminateVal()
static int    flag  = -1;

// initialize to expect 1 call to the mock discriminateVal() 
// expecting arguement lx within leps absolute error
// return    result    ldiscrmx
void mock_setup_discriminateVal(double lx, double ldiscrmx, double calcErr) {
	ex = lx;
	err = calcErr;
	discrmx = ldiscrmx;
	count = 0;
	flag=0;
}

/*
Redefine discriminateVal() so that specified discriminate value will be 
returned and module's values will be modified
*/
double discriminateVal(double a, double b, double c){ 
	x = (b*b)-4.0*a*c;
	count++;

	if(fabs(ex - x) > err) {
		flag=1;
	}
	return discrmx;
}

/*Original, unchanged discriminateRoots function*/
short discriminateRoots(double a, double b, double c){
	/*Declare variables*/
	double discriminate = 0;
	short iret = 0;

	/*Get evaluated discriminate*/
	discriminate = discriminateVal(a, b, c);

	/*Analyze discrimninate and return 0 (complex roots), 1 (double root), 
	or 2 (2 roots) to calling function*/
	if(discriminate > 0){
		/*There will be 2 real roots*/
		iret = TWOROOTS;
	}else if(discriminate == 0){
		/*There will be 1 double root*/
		iret = DOUBLEROOT;
	}else{
		/*There will be complex roots*/
		iret = COMPLEX;
	}

	/*Return code to calling function*/
	return iret;
}

// Returns 0 if the correct argument was passed and only one call was made.
// else there was a problem and retun 1
int mock_check_discriminateVal(int *lcount,  double *lx) {
	int	ret;
	*lcount = count;
	*lx = x;

	if((flag == 0) && (count==1)) {
		ret = 0;
	} else {
		ret = 1;
	}
	return ret; 
}

void mock_teardown_discriminateVal() {
	x = -1.0;
	ex = -1.0;
	err = -1.0;
	discrmx = -1.0;
	count = 0;
	flag  = -1;
	return ;
}