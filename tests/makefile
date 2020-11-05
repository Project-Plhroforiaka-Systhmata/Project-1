OBJS	= DoubleLinkedListTest.o
SOURCE	= DoubleLinkedListTest.cpp
HEADER	= acutest.h
OUT	= a.out
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

DoubleLinkedListTest.o: DoubleLinkedListTest.cpp
	$(CC) $(FLAGS) DoubleLinkedListTest.cpp -std=c++14


clean:
	rm -f $(OBJS) $(OUT)