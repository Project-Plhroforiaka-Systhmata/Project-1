OBJS	= DoubleLinkedListTest.o llisttest.o ../llist.o
OUT	= dll,llisttest

OBJS0	= DoubleLinkedListTest.o
SOURCE0	= DoubleLinkedListTest.cpp
HEADER0	= DoubleLinkedList.h acutest.h
OUT0	= dll

OBJS1	= llisttest.o llist.o
SOURCE1	= llisttest.cpp ../llist.cpp
HEADER1	= acutest.h
OUT1	= llisttest

CC	 = g++
FLAGS	 = -g -c
LFLAGS	 = 

all: dll llisttest

dll: $(OBJS0) $(LFLAGS)
	$(CC) -g $(OBJS0) -o $(OUT0)

llisttest: $(OBJS1) $(LFLAGS)
	$(CC) -g $(OBJS1) -o $(OUT1)

DoubleLinkedListTest.o: DoubleLinkedListTest.cpp
	$(CC) $(FLAGS) DoubleLinkedListTest.cpp -std=c++14

llisttest.o: llisttest.cpp
	$(CC) $(FLAGS) llisttest.cpp -std=c++14

../llist.o: ../llist.cpp
	$(CC) $(FLAGS) ../llist.cpp -std=c++14


clean:
	rm -f $(OBJS) $(OUT)