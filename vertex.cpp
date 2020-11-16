#include <iostream>
#include "vertex.h"

vertex::vertex(string name, string specs): printed(0), spec(name), itemSpecs(specs) {
    //create the list and insert self
    specList = new list;
    specList->insert(this);
}

int vertex::copyList(list *cpList) { //used in order to copy vertex specList to cpList
    if(specList->head == NULL){
        return 1;
    }

    //keep specList address
    list *tempList = specList;
    vertex *temp;
    temp = tempList->pop();
    while(temp != NULL){
        cpList->insert(temp);       //insert popped vertex to cpList
        temp->specList = cpList;    //change popped vertex's specList pointer to cpList
        temp = tempList->pop();     //pop next vertex
    }
    delete tempList;    //delete the empty tempList
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
