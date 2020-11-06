#ifndef PROJECT_1_VERTEX_H
#define PROJECT_1_VERTEX_H
#include <string>
#include "llist.h"

using namespace std;

class vertex {
public:
    string spec;
    llist *specList;
    vertex(string);
    int copyList(llist*);
};


#endif
