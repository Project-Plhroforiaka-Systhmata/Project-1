#ifndef PROJECT_1_LIST_H
#define PROJECT_1_LIST_H

#include <string>

using namespace std;

struct node {
    string spec;
    node *next = NULL, *prev = NULL;
};

class list {
public:
    node *head, *tail;
    list();
    void insert(string);
    node pop();
    ~list();
};


#endif //PROJECT_1_LIST_H
