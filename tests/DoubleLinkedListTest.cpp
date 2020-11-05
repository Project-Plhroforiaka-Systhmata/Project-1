
#include "../DoubleLinkedList.h"

#include "acutest.h"



void test_create(void){
    DoubleLinkedList *list = new DoubleLinkedList();
    TEST_ASSERT(list->length == 0);

}

void test_insert(void){
    DoubleLinkedList *list = new DoubleLinkedList();
    list->AddNodeToEnd(new Record("test"));
    TEST_ASSERT(list->length == 1);
    TEST_ASSERT(list->first != nullptr);
    TEST_ASSERT(list->last != nullptr);
    list->AddNodeToEnd(new Record("test"));
    TEST_ASSERT(list->length == 2);
    TEST_ASSERT(list->first != list->last);

    TEST_ASSERT(list->first->next == list->last);
    TEST_ASSERT(list->last->prev == list->first);

}

void test_destroy(void){
    DoubleLinkedList *list = new DoubleLinkedList();
    
    delete list;
    TEST_ASSERT(list->length == 0);
    TEST_ASSERT(list->first == nullptr);
    TEST_ASSERT(list->last == nullptr);
}


TEST_LIST = {
    {"list_create",test_create},
    {"list_add",test_insert},
    {"list_destroy",test_destroy},
    {nullptr,nullptr},
};