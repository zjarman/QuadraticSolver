CC = gcc
$LIBS = -lm
$CFLAGS = -ansi -I -Wall -Werror -g -pedantic

a.out: t1.o input.o input.h
	$(CC) -o $@ t1.o input.o input.h $(CFLAGS) $(LIBS)

input.o: input.c

t1.o: t1.c
clean:
	rm *.o *.out
