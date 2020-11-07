#include "vertex.h"

vertex::vertex(string name, string specs): spec(name), itemSpecs(specs) {
    specList = new llist;
    specList->insert(spec);
}

int vertex::copyList(llist *cpList) {
    if(specList->head == NULL){
        return 1;
    }
    node temp;
    temp = specList->pop();
    while(temp.spec != "blank"){
        cpList->insert(temp.spec);
        temp = specList->pop();
    }
    delete specList;
    specList = NULL;
    return 0;
}