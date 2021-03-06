#include <float.h>
#include <stdio.h>

int main(int argc, char * argv[])
{


printf("Testing floats\n----------\n");


	printf("Min: %e\n", FLT_MIN);

	printf("Max: %e\n", FLT_MAX);

	printf("Can represent: %d digits without loss of precision\n", FLT_DIG);

	printf("Max Exponent: %d\n",  FLT_MAX_EXP);

	printf("Min Exponent: %d\n", FLT_MIN_EXP);

	printf("Max exponent with %d\n",  FLT_MIN_10_EXP);

	printf("Max digits in mantissa: %d\n", FLT_MANT_DIG);


printf("\nTesting Doubles\n----------\n");

	printf("Min: %e\n", DBL_MIN);

	printf("Max: %e\n", DBL_MAX);

	printf("Can represent: %d digits without loss of precision\n", DBL_DIG);

	printf("Max Exponent: %d\n",  DBL_MAX_EXP);

	printf("Min Exponent: %d\n", DBL_MIN_EXP);

	printf("Max exponent with %d\n",  DBL_MIN_10_EXP);

	printf("Max digits in mantissa: %d\n", DBL_MANT_DIG);

printf("\nTesting Long Doubles\n----------\n");

	printf("Min: %e\n", LDBL_MIN);

	printf("Max: %e\n", LDBL_MAX);

	printf("Can represent: %d digits without loss of precision\n", LDBL_DIG);

	printf("Max Exponent: %d\n",  LDBL_MAX_EXP);

	printf("Min Exponent: %d\n", LDBL_MIN_EXP);

	printf("Max exponent with %d\n",  LDBL_MIN_10_EXP);

	printf("Max digits in mantissa: %d\n", LDBL_MANT_DIG);

return 0;


} 
