all : main

main: main.o lib.a
	g++ main.o calculator.o -o main

main.o : main.cpp
	g++ -c main.cpp

calculator.o : calculator.cpp
	g++ -c calculator.cpp
	
lib.a : calculator.o
	ar rcs lib.a main.o calculator.o

clean:
	rm *.o
