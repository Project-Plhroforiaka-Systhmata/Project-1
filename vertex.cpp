#include <iostream>
#include "vertex.h"

vertex::vertex(string name, string specs): spec(name), itemSpecs(specs) {
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
