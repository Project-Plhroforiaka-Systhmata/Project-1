#include "list.h"

list::list() {
    head = NULL;
    tail = NULL;
}

int list::insert(string name) {
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

node list::pop() {
    if(head == NULL){
        node returnNode;
        return returnNode;
    }
    if(head == tail){
        node returnNode;
        returnNode.spec = head->spec;
        delete head;
        return returnNode;
    }
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
