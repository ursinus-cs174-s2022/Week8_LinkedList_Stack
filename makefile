CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: driver palindrome

linkedlist.o: linkedlist.cpp linkedlist.h
	$(CC) $(CFLAGS) -c linkedlist.cpp

driver: linkedlist.o driver.cpp
	$(CC) $(CFLAGS) -o driver driver.cpp linkedlist.o

palindrome: linkedlist.o palindrome.cpp
	$(CC) $(CFLAGS) -o palindrome palindrome.cpp linkedlist.o

clean:
	rm *.o driver palindrome