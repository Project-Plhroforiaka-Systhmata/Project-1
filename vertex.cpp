#include <iostream>
#include "vertex.h"

vertex::vertex(string name, string specs): printed(0), spec(name), itemSpecs(specs) {
    specList = new llist;
    specList->insert(this);
}

int vertex::copyList(llist *cpList) {
    if(specList->head == NULL){
        return 1;
    }
    llist *tempList = specList;
    vertex *temp;
    temp = tempList->pop();
    while(temp != NULL){
        cpList->insert(temp);
        temp->specList = cpList;
        temp = tempList->pop();
    }
    delete tempList;
    return 0;
}

void vertex::printList() {
    node *temp;
    temp = specList->head;
    while(temp != NULL){
        if (temp->spec->spec != spec && !temp->spec->printed) {
            cout << spec << " " << temp->spec->spec << endl;
        }
        temp = temp->next;
    }
    printed = 1;
}

vertex::~vertex() {
    if (specList != NULL){
        node *temp;
        temp = specList->head;
        while(temp != NULL){
            if(temp->spec->spec != spec) {
                temp->spec->specList = NULL;
            }
            temp = temp->next;
        }
        delete specList;
    }
}
