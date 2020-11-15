#ifndef PROJECT_1_llist_H
#define PROJECT_1_llist_H

#include <string>

using namespace std;

class vertex;

struct node {
    vertex *spec = NULL;
    node *next = NULL, *prev = NULL;
};

class llist {
public:
    int printed;
    node *head, *tail;
    llist();
    int insert(vertex*);
    vertex* pop();
    ~llist();
};


#endif
