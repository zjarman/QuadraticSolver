Directory for Solver which will solve the quadratic equation

The main method in quadsolver.c will calculate the quadratic equation and print roots to the user.  The makefile will pull all needed code from other directories to this directory to be compiled with the quadsolver.c and header file

The tester t1.c will test certain parts of the equation solving process.
The tester t2.c will test the quadsolver program with a mock mysqrt() function.
The tester t3.c will test the quadsolver program with a mock discriminate function;

Makefile commands:

make a.out: the program
make d.out: the program along with debug information
make test: run all unit tests for solver
make t1: run unit test quadsolver only
make t2: run unit test mock_mysqrt only
make t3: run unit test mock_discriminate only
make clean: clean up the file
