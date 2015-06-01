# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS = -Wall -g

TARGET = jungle-chess

all: 
	  g++ animal.cpp jungle-chess.cpp -g -Wall -o jungle-chess 

Clean:
	rm -rf *.o
	rm -rf *.exe
