CC = gcc
LIBS = -lm
CFLAGS = -ansi -I ../Headers -Wall -Werror -g -pedantic -std=c99

t1.out: t1.o cunit.o input.o input.h
	$(CC) -o $@ t1.o cunit.o input.o input.h $(CFLAGS) $(LIBS)

input.o: input.c

t1.o: t1.c

cunit.o:
	cd ../Headers/; make cunit.o; mv ../Headers/cunit.o ../Input

clean:
	rm *.o *.out
