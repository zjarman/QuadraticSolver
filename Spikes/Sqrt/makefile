CC = gcc
$LIBS = -lm
$CFLAGS = -ansi -I -Wall -Werror -g -pedantic -frounding-math-fsignaling-nans

test: t1 t2 t3
	t1
	t2
	t3
t1: t1.o sqrt.h
	$(CC) -o $@ t1.o sqrt.h $(CFLAGS) $(LIBS)

t2: t2.o sqrt.h
	$(CC) -o $@ t2.o sqrt.h $(CFLAGS) $(LIBS)

t3: t3.o sqrt.h
	$(CC) -o $@ t3.o sqrt.h $(CFLAGS) $(LIBS)

t1.o: t1.c
t2.o: t2.c
t3.o: t3.c
