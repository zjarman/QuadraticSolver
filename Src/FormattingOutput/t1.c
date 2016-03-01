#include <stdio.h>
#include "outputformatting.h"

int main(){
	/*Test complex root output*/
	formatoutput(0, 1, 2, 3, 25, 25);

	/*Test double root output*/
	formatoutput(1, 1, 2, 3, 25, 25);

	/*Test 2 roots output*/
	formatoutput(2, 1, 2, 3, 25, 25);
}