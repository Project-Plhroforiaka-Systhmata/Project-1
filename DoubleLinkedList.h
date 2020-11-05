#ifndef PROJECT_1_DOUBLELINKEDLIST_H
#define PROJECT_1_DOUBLELINKEDLIST_H

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

    DoubleLinkedList(){
        first = nullptr;
        last = nullptr;
    }
    void printList(){
        Node *iterate = this->first;
        while (iterate != nullptr){
            iterate->rec->print();
            iterate = iterate->next;
        }
    }
    Node* AddNodeToEnd(Record *data){
        Node *newNode = new Node();
        newNode->rec = data;
        length++;
        if (this->last != nullptr){
            this->last->next = newNode;
            this->last->next->prev = this->last;
            this->last = newNode;
            return this->last;
        }else{
            this->first = newNode;
            this->last  = newNode;
            return this->last;
        }
    }

    ~DoubleLinkedList(){
        Node *tmp = nullptr;
        tmp = first;
        while (tmp != nullptr){
            first = tmp->next;
            delete tmp;
            tmp = first;
        }

    }

};


#endif //PROJECT_1_DOUBLELINKEDLIST_H
