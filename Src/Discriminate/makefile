CC = gcc
LIBS = -lm
CFLAGS = -ansi -I ../Headers -Wall -Werror -g -pedantic -std=c99 -mfpmath=387

test: t1.out

t1.out: t1.o cunit.o discriminate.o
	$(CC) -o $@ t1.o cunit.o discriminate.o $(CFLAGS) $(LIBS)

discriminate.o: discriminate.h

t1.o: t1.c

cunit.o:
	cd ../Headers/; make cunit.o; mv ../Headers/cunit.o ../Discriminate

clean:
	rm *.o *.out 
