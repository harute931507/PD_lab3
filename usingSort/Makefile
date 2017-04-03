lab2: Clock.o main.o
	g++ -o lab3 Clock.o main.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

main.o: main.cpp Clock.h
	g++ -c main.cpp

clean:
	rm lab3 *.o

