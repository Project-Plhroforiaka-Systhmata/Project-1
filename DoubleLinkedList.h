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

    Node* pop(){
        length--;
        Node *tmp = last;
        last = last->prev;
        if (last){
            last->next = nullptr;
        }
        if (length == 0){
            first = nullptr;
        }
        delete tmp->rec->testStr;
        delete tmp->rec;
        tmp->rec = nullptr;
        tmp->prev = nullptr;
        tmp->next = nullptr;
        delete tmp;
    }

    void freeRam(){
        Node *tmp = nullptr;
        tmp = first;
        while (tmp != nullptr){
            first = tmp->next;
            delete tmp;
            tmp = first;
        }
        this->length = 0;
        this->first = nullptr;
        this->last = nullptr;
    }

    ~DoubleLinkedList(){
       freeRam();
    }

};


#endif //PROJECT_1_DOUBLELINKEDLIST_H
