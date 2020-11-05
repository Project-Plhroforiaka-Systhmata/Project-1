#ifndef PROJECT_1_VERTEX_H
#define PROJECT_1_VERTEX_H
#include <string>
#include "list.h"

using namespace std;

class vertex {
public:
    string spec;
    list *specList;
    vertex(string);
    int copyList(list*);
};


#endif
