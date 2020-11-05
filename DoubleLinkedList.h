#ifndef PROJECT_1_DOUBLELINKEDLIST_H
#define PROJECT_1_DOUBLELINKEDLIST_H

#include <iostream>
#include "Record.h"

typedef struct Node{
    Node *prev;
    Node *next;
    Record *rec;
}Node;

class DoubleLinkedList {
public:
    Node *first;
    Node *last;
    int length = 0;

    DoubleLinkedList();
    void printList();
    Node* AddNodeToEnd(Record *data);
    ~DoubleLinkedList();
};


#endif //PROJECT_1_DOUBLELINKEDLIST_H
