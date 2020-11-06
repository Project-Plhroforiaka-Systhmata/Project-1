#ifndef PROJECT_1_llist_H
#define PROJECT_1_llist_H

#include <string>

using namespace std;

struct node {
    string spec = "blank";
    node *next = nullptr, *prev = nullptr;
};

class llist {
public:
    node *head, *tail;
    llist();
    int insert(string);
    node pop();
    ~llist();
};


#endif
