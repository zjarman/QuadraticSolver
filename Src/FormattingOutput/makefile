CC = gcc
LIBS = -lm
CFLAGS = -ansi -I -Wall -Werror -g -pedantic -std=c99

test: t1.out

t1.out: t1.o outputformatting.o outputformatting.h
	$(CC) -o $@ t1.o outputformatting.o outputformatting.h $(CFLAGS) $(LIBS)

outputformatting.o: outputformatting.c

t1.o: t1.c

clean:
	rm *.o *.out 
