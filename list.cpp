#include "list.h"

list::list() {
    head = NULL;
    tail = NULL;
}

void list::insert(string name) {
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
}

node list::pop() {
    node returnNode;
    returnNode.spec = head->spec;
    head = head->next;
    delete head->prev;
    head->prev = NULL;
    return returnNode;
}

list::~list() {
    node *temp;
    temp = head;
    while(temp != NULL){
        head = temp->next;
        delete temp;
        temp = head;
    }
}
