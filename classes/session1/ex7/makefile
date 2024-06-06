#~ Sample makefile for a program using:
#~    point.h
#~    point.cpp
#~    l6.cpp

CC = g++
#~ Additional options can be included, as below
#~ CC = g++ -std=c++17 -Wall

#~ Rule for the main target
l7: l7.o point.o
	$(CC) -o $@ $^

#~ Additional rules for dependencies
l7.o: l7.cpp
	$(CC) -c $^

point.o: point.cpp
	$(CC) -c $^

#~ As an alternative to create an individual rule for each dependency
#~ You can try to use a generic rule like this below
#~ (no need to define the two rules above)
%.o: %.cpp
	$(CC) -c $^
