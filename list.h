#ifndef PROJECT_1_LIST_H
#define PROJECT_1_LIST_H

#include <string>

using namespace std;

struct node {
    string spec = "blank";
    node *next = NULL, *prev = NULL;
};

class list {
public:
    node *head, *tail;
    list();
    int insert(string);
    node pop();
    ~list();
};


#endif
