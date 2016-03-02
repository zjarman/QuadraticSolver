CC = gcc
LIBS = -lm
CFLAGS = -ansi -I ../Headers -Wall -Werror -g -pedantic -std=c99

test: t1.out

t1.out: t1.o cunit.o outputformatting.o
	$(CC) -o $@ t1.o cunit.o outputformatting.o outputformatting.h $(CFLAGS) $(LIBS)

outputformatting.o: outputformatting.h

t1.o: t1.c

cunit.o:
	cd ../Headers/; make cunit.o; mv ../Headers/cunit.o ../FormattingOutput

clean:
	rm *.o *.out 
