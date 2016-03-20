CC = gcc
LIBS = -lm
CFLAGS = -ansi -I ../Headers -Wall -pedantic -std=c99 -mfpmath=387 
ALLNEEDEDHEADERS = -Idir ../Headers
DEBUG = -D DEBUG=55

a.out: main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h
	$(CC) -o $@ main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h $(CFLAGS) $(LIBS)

d.out: main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h
	$(CC) -o $@ main.c input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h $(CFLAGS) $(DEBUG) $(LIBS) 

t1: t1.o cunit.o input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h
	$(CC) -o $@ t1.o cunit.o input.o input.h discriminate.o discriminate.h sqrt.o sqrt.h outputformatting.o outputformatting.h quadsolver.c quadsolver.h $(CFLAGS) $(LIBS)
# mock mysqrt tester
t2: t2.o quadsolver.o mock_mysqrt.o cunit.o input.o discriminate.o outputformatting.o
	${CC} -o $@ t2.o quadsolver.o mock_mysqrt.o cunit.o input.o discriminate.o outputformatting.o $(CFLAGS) ${LIBS}
test: a.out t1 t2
	./t1
	./t2
input.o:
	cd ../Input/; make input.o; mv ../Input/input.o ../Solver; cp ../Input/input.h ../Solver

discriminate.o:
	cd ../Discriminate/; make discriminate.o; mv ../Discriminate/discriminate.o ../Solver; cp ../Discriminate/discriminate.h ../Solver

outputformatting.o: 
	cd ../FormattingOutput/; make outputformatting.o; mv ../FormattingOutput/outputformatting.o ../Solver; cp ../FormattingOutput/outputformatting.h ../Solver

sqrt.o:
	cd ../Sqrt/; make sqrt.o; mv ../Sqrt/sqrt.o ../Solver; cp ../Sqrt/sqrt.h ../Solver

#cunit.o:
#	cd ../Headers/; make cunit.o; mv ../Headers/cunit.o ../Solver

mock_qsolve_sqrt.o: mock_mysqrt.h qsolve_sqrt.h 
cunit.o: cunit.h
t1.o: cunit.h quadsolver.h 
t2.o: cunit.h quadsolver.h mock_mysqrt.h

clean:
	rm *.o *.out discriminate.h input.h outputformatting.h sqrt.h t1 t2
pack:
	cd ../../; tar -zcvf quadSolver.tar.gz Src; mv quadSolver.tar.gz ./Src/Deployment


