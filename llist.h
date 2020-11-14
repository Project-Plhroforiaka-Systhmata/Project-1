#ifndef PROJECT_1_llist_H
#define PROJECT_1_llist_H

#include <string>

using namespace std;

class vertex;

struct node {
    vertex *spec = NULL;
    node *next = nullptr, *prev = nullptr;
};

class llist {
public:
    node *head, *tail;
    llist();
    int insert(vertex*);
    vertex* pop();
    void printList();
    ~llist();
};


#endif
