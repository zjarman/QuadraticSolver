CC = gcc
LIBS = -lm
CFLAGS = -ansi -I -Wall -Werror -g -pedantic -std=c99 -mfpmath=387

test: t1.out
	
t1.out: t1.o sqrt.c sqrt.h
	$(CC) -o $@ t1.o sqrt.c sqrt.h $(CFLAGS) $(LIBS)

sqrt.o: sqrt.c

t1.o: t1.c

clean:
	rm *.o *.out 
