Sqrt Spikes Directory

Run make in your command line with these options:
	"No Options":  The makefile will compile an executable for the sqrt.c source to run which will be "a.out"
	Run: The makefile will compile an executable for the sqrt.c source to run which will be "a.out", and run a.out
	Clean: The makefile will delete all object files created to compile the sqrt.c source code

The sqrt.c in this directory will allow the user to enter quadratic values for A, B, and C (INF, -INF, and NAN are acceptable input).  

The program will then test the 3 sqrt() functions in the math.h library.  One function returns a float, another a double, and another a long double.  Each of the user's values will be evaluated separately, then as multiplied together.  The results for each will be return to user via command line.

In the return value, the user will be able to see the answer along with any rounding done.  The user will also see if the return value is an INF, -INF, or NAN.

