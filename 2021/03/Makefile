##
# AdventOfCode
#
# @file
# @version 0.1

CC=clang++
CXXFLAGS= -o3 -Wall

build: main
main: main.o
main.o: main.cpp

run: main
		./main < input.txt

clean:
		rm -f *.o main

.PHONY: build run clean
# end
