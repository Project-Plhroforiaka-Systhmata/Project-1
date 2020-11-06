#include "llist.h"

llist::llist() {
    head = NULL;
    tail = NULL;
}

int llist::insert(string name) {
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

node llist::pop() {
    node returnNode;
    if(head == NULL){
        return returnNode;
    }
    if(head == tail){
        returnNode.spec = head->spec;
        delete head;
        head = NULL;
        tail = NULL;
        return returnNode;
    }
    returnNode.spec = head->spec;
    head = head->next;
    delete head->prev;
    head->prev = NULL;
    return returnNode;
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
