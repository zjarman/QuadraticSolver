/* 
mock_sqrt.c
mock_sqrt is a mock object for quadsolver() 
This allows:
testing of the quadsolver roots with a mock object, 
 
First called is:
mock_setup_mysqrt(): currently allows only one x value at a time.

Then call :
mysqrt(): the mock mysqrt() in this module (which does 
     not call sqrt() ). It has the same signiture as the usual 
     mysqrt() (which does call sqrt() )
 
 Then call
 mock_check_mysqrt():  to check for corectness of
     the call to the mock mysqrt()
  
 The mock mysqrt() does keep track of the number of times
    it is called, which should only be 1.
*/

#include <math.h>
#include "mock_mysqrt.h"
#include "sqrt.h"

static double x     = -1.0;  // actual arguement passed to mysqrt()
static double ex    = -1.0;  // expected argument x to mysqrt()
static double err   = -1.0;  // absolute error allowed in x
static double sqrtx = -1.0;  // result to return from mysqrt(), sqrt(x)
static int    count = 0;     // actual count of calls to mysqrt()
static int    flag  = -1;

// initialize to expect 1 call to the mock qsolve_sqrt() 
// expecting arguement lx within leps absolute error
// return    result    lsqrtx
void mock_setup_mysqrt(double lx, double lsqrtx, double calcErr) {
	ex = lx;
	err = calcErr;
	sqrtx = lsqrtx;
	count = 0;
	flag=0;
}

/*
Redefine mysqrt() so that specified sqrt value will be returned and module's
values will be modified
*/
double mysqrt(double lx) { 
	x = lx;
	count++;

	if(fabs(ex- lx) > err) {
		flag=1;
	}
	return sqrtx;
}

// Returns 0 if the correct argument was passed and only one call was made.
// else there was a problem and retun 1
int mock_check_mysqrt(int *lcount,  double *lx) {
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

void mock_teardown_mysqrt() {
	x = -1.0;
	ex = -1.0;
	err = -1.0;
	sqrtx = -1.0;
	count = 0;
	flag  = -1;
	return ;
}
