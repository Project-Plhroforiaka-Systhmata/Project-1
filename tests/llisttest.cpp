#include "../llist.h"

#include "acutest.h"
#include "string.h"

void test_create(void){
    llist *mylist = new llist();
    TEST_ASSERT(mylist->head == nullptr);
    TEST_ASSERT(mylist->tail == nullptr);
}

void test_insert(void){
    llist *mylist = new llist();
    mylist->insert("lalalalalalalalallalalalalalallalalalalalalallal");
    TEST_ASSERT(mylist->head != nullptr);
    TEST_ASSERT(mylist->head == mylist->tail);
    TEST_ASSERT(mylist->head->spec == "lalalalalalalalallalalalalalallalalalalalalallal");
    
}

void test_pop(void){
    llist *mylist = new llist();
    mylist->insert("lalalalalalalalallalalalalalallalalalalalalallal");
    mylist->pop();
    TEST_ASSERT(mylist->head == nullptr);
    TEST_ASSERT(mylist->tail == nullptr);
    mylist->insert("lalalalalalalalallalalalalalallalalalalalalallal");
    mylist->insert("lalalalalalalalallalalalalalallalalalalalalallal");
    mylist->pop();
    TEST_ASSERT(mylist->head == mylist->tail);
    mylist->pop();
    TEST_ASSERT(mylist->head == nullptr);
    TEST_ASSERT(mylist->tail == nullptr);
    
}

TEST_LIST = {
    {"list_create",test_create},
    {"list_insert",test_insert},
    {"list_pop",test_pop},
    {nullptr,nullptr},
};