#ifndef PROJECT_1_VERTEX_H
#define PROJECT_1_VERTEX_H
#include <string>
#include "llist.h"

using namespace std;

class vertex {
public:
    string spec, itemSpecs;
    llist *specList;
    vertex(string, string);
    int copyList(llist*);
    void printList();
    ~vertex();
};


#endif
