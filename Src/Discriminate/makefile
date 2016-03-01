CC = gcc
LIBS = -lm
CFLAGS = -ansi -I -Wall -Werror -g -pedantic -std=c99 -mfpmath=387

test: t1.out

t1.out: t1.o discriminate.o discriminate.h
	$(CC) -o $@ t1.o discriminate.o discriminate.h $(CFLAGS) $(LIBS)

discriminate.o: discriminate.c

t1.o: t1.c

clean:
	rm *.o *.out 
