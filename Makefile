CC=g++

all: main

main: main.cpp point.hpp point.o line.hpp line.o
	$(CC) main.cpp point.o line.o -o main

point.o: point.hpp point.cpp
	$(CC) -c point.cpp -o point.o

line.o: line.hpp line.cpp
	$(CC) -c line.cpp -o line.o

clean:
	rm -f *.o main
