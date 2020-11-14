#include "llist.h"
#include "vertex.h"
#include <iostream>

using namespace std;

llist::llist() {
    head = NULL;
    tail = NULL;
}

int llist::insert(vertex *name) {
    node *newNode = new node;
    newNode->spec = name;
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    return 0;
}

vertex* llist::pop() {
    if(head == NULL){
        cout << "in here" << endl;
        return NULL;
    }
    vertex *returnVert;
    if(head == tail){
        returnVert = head->spec;
        delete head;
        head = NULL;
        tail = NULL;
        return returnVert;
    }
    returnVert = head->spec;
    head = head->next;
    delete head->prev;
    head->prev = NULL;
    return returnVert;
}

void llist::printList() {
    node *temp;
    temp = head;
    while(temp != NULL){
        cout << temp->spec->spec << endl;
        temp = temp->next;
    }
}

llist::~llist() {
    node *temp;
    temp = head;
    while(temp != NULL){
        head = temp->next;
        delete temp;
        temp = head;
    }
}
