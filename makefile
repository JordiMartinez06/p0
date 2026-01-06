all: exe_p0

BrazoRobotico.o: BrazoRobotico.h BrazoRobotico.cpp
	g++ -c BrazoRobotico.cpp

main.o: BrazoRobotico.h
	g++ -c main.cpp

exe_p0: main.o BrazoRobotico.o
	g++ -o exe_p0 main.o BrazoRobotico.o

clear:
	rm -f *.o exe_p0

test: all
	./exe_p0
