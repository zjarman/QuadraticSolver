CC = gcc
LIBS = -lm
CFLAGS = -ansi -I ../Headers -Wall -pedantic -std=c99 -mfpmath=387 
ALLNEEDEDHEADERS = -Idir ../Headers
DEBUG = -D DEBUG=55

a.out: main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h
	$(CC) -o $@ main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h $(CFLAGS) $(LIBS)

d.out: main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h
	$(CC) -o $@ main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h $(CFLAGS) $(DEBUG) $(LIBS) 

t1.out: t1.c cunit.o input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h
	$(CC) -o $@ t1.c cunit.o input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h $(CFLAGS) $(LIBS)

test: t1.out

input.o:
	cd ../Input/; make input.o; mv ../Input/input.o ../Solver; cp ../Input/input.h ../Solver

discriminate.o:
	cd ../Discriminate/; make discriminate.o; mv ../Discriminate/discriminate.o ../Solver; cp ../Discriminate/discriminate.h ../Solver

outputformatting.o: 
	cd ../FormattingOutput/; make outputformatting.o; mv ../FormattingOutput/outputformatting.o ../Solver; cp ../FormattingOutput/outputformatting.h ../Solver

sqrt.o:
	cd ../Sqrt/; make sqrt.o; mv ../Sqrt/sqrt.o ../Solver; cp ../Sqrt/sqrt.h ../Solver

cunit.o:
	cd ../Headers/; make cunit.o; mv ../Headers/cunit.o ../Solver

clean:
	rm *.o *.out discriminate.h input.h outputformatting.h sqrt.h
pack:
	cd ../../; tar -zcvf quadSolver.tar.gz Src; mv quadSolver.tar.gz ./Src/Deployment


