CC = g++
CFLAGS = -Wall -Werror -g --std=gnu++11
#CFLAGS = -Wall -Werror -D TEST  

all: Complex.o LinkedList.o main.o
	$(CC) $(CFLAGS) Complex.o LinkedList.o main.o -o prg.exe

main.o:
	$(CC) $(CFLAGS) main.cpp -c -o main.o

LinkedList.o: LinkedList.cpp LinkedList.h
	$(CC) $(CFLAGS) LinkedList.cpp -c -o LinkedList.o

Complex.o: Complex.cpp Complex.h
	$(CC) $(CFLAGS) Complex.cpp -c -o Complex.o

clean:
	rm -f *.o 