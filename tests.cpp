#include "llist.h"
#include "DoubleLinkedList.h"
#include "acutest.h"
#include "hashTable.h"
#include "vertex.h"
#include "string.h"
#include <ctime>

void test_createllist(void){
    llist *mylist = new llist();
    TEST_ASSERT(mylist->head == nullptr);
    TEST_ASSERT(mylist->tail == nullptr);
}

void test_insertllist(void){
    llist *mylist = new llist();
    mylist->insert(new vertex("lalalalalalalalallalalalalalallalalalalalalallal","lalalalalalalalallalalalalalallalalalalalalallal"));
    TEST_ASSERT(mylist->head != nullptr);
    TEST_ASSERT(mylist->head == mylist->tail);
    TEST_ASSERT(mylist->head->spec->spec == "lalalalalalalalallalalalalalallalalalalalalallal");
    
}

void test_popllist(void){
    llist *mylist = new llist();
    mylist->insert(new vertex("lalalalalalalalallalalalalalallalalalalalalallal","lalalalalalalalallalalalalalallalalalalalalallal"));
    vertex *tmp = mylist->pop();
    TEST_ASSERT(tmp != nullptr);
    TEST_ASSERT(mylist->head == nullptr);
    TEST_ASSERT(mylist->tail == nullptr);
    mylist->insert(new vertex("lalalalalalalalallalalalalalallalalalalalalallal","lalalalalalalalallalalalalalallalalalalalalallal"));
    mylist->insert(new vertex("lalalalalalalalallalalalalalallalalalalalalallal","lalalalalalalalallalalalalalallalalalalalalallal"));
    mylist->pop();
    TEST_ASSERT(mylist->head == mylist->tail);
    mylist->pop();
    TEST_ASSERT(mylist->head == nullptr);
    TEST_ASSERT(mylist->tail == nullptr);
    mylist->pop();
    mylist->pop();
    mylist->pop();
    mylist->pop();
    mylist->pop();
    mylist->pop();
}

void test_createdll(void){
    DoubleLinkedList *list = new DoubleLinkedList();
     TEST_ASSERT(list->length == 0);
    TEST_ASSERT(list->first == list->last);
    TEST_ASSERT(list->first == nullptr);
}

void test_insertdll(void){
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

void test_destroydll(void){
    DoubleLinkedList *list = new DoubleLinkedList();
    list->AddNodeToEnd(new Record("test"));
    list->freeRam();
    TEST_ASSERT(list->length == 0);
    TEST_ASSERT(list->first == nullptr);
    TEST_ASSERT(list->last == nullptr);
}

void test_popdll(void){
    DoubleLinkedList *list = new DoubleLinkedList();
    list->AddNodeToEnd(new Record("test"));
    list->pop();
    TEST_ASSERT(list->length == 0);
    TEST_ASSERT(list->first == nullptr);
    TEST_ASSERT(list->last == nullptr);
    list->AddNodeToEnd(new Record("test"));
    list->AddNodeToEnd(new Record("test"));
    list->pop();
    TEST_ASSERT(list->first == list->last);
    list->pop();
    TEST_ASSERT(list->length == 0);
    TEST_ASSERT(list->first == nullptr);
    TEST_ASSERT(list->last == nullptr);
    
}

void test_createhash(void){
    hashTable *table = new hashTable(150);
    TEST_ASSERT(table->numBuckets == 150);
    table = new hashTable(9999999);
    TEST_ASSERT(table->numBuckets == 9999999);
    table = new hashTable(0);
    TEST_ASSERT(table->numBuckets == 0);
}

void test_inserthash(void){
    hashTable *table = new hashTable(300);
    table->insert("test",new vertex("test","test"));
    table->insert("test1",new vertex("test1","test1"));
    table->insert("test2",new vertex("test2","test2"));
    table->insert("SDXCV",new vertex("SDXCV","SDXCV"));
    table->insert("lala",new vertex("lala","lala"));
    TEST_ASSERT(table->search("test") != nullptr);
    TEST_ASSERT(table->search("test1") != nullptr);
    TEST_ASSERT(table->search("test2") != nullptr);
    TEST_ASSERT(table->search("sdfsdfsdf") == nullptr);
    TEST_ASSERT(table->search("lala") != nullptr);
    //overflow test below
    long int before = time(0);
    long int now = 0;
    while (true){
        table->insert("test",new vertex("test1","test"));
        now = time(0);
        if ((now - before) > 5){
            break;
        }
    }
}



void test_vertexcopy(void){
    vertex *one = new vertex("test","test");
    llist *tmp = new llist();
    tmp->insert(new vertex("1","1"));
    tmp->insert(new vertex("2","2"));
    tmp->insert(new vertex("3","3"));
    one->specList = tmp;
    vertex *two = new vertex("test","test");
    tmp = new llist();
    tmp->insert(new vertex("4","4"));
    tmp->insert(new vertex("5","5"));
    tmp->insert(new vertex("6","6"));
    two->specList = tmp;
    two->copyList(one->specList);
    TEST_ASSERT(one->specList->head != nullptr);
    int counter = 0;
    while (counter <= 5){
        vertex *test = one->specList->pop();
        TEST_ASSERT(test != nullptr);
        if (counter == 0){
            TEST_ASSERT(test->spec == "1");
        }else if(counter == 1)
        {
            TEST_ASSERT(test->spec == "2");
        }else if(counter == 2)
        {
            TEST_ASSERT(test->spec == "3");
        }else if(counter == 3)
        {
            TEST_ASSERT(test->spec == "4");
        }else if(counter == 4)
        {
            TEST_ASSERT(test->spec == "5");
        }else if(counter == 5)
        {
            TEST_ASSERT(test->spec == "6");
        }
        counter++;
        
    } 
}

void test_destroyhash(void){
    hashTable *test = new hashTable(9999);
    delete test;
    TEST_ASSERT(test->table == nullptr);
    
}

void test_search(void){
    hashTable *test = new hashTable(4);
    test->insert("test",new vertex("test","test"));
    test->insert("test",new vertex("test","test"));
    test->insert("test",new vertex("test","test"));
    test->insert("test",new vertex("test","test"));
    test->insert("test",new vertex("test","test"));
    test->insert("test",new vertex("test","test"));
    test->insert("test",new vertex("test","test"));
    test->insert("test1",new vertex("test1","test"));
    TEST_ASSERT(test->search("test") != nullptr);
    TEST_ASSERT(test->search("xcxcv") == nullptr);
}

TEST_LIST = {
    {"llist_create",test_createllist},
    {"llist_insert",test_insertllist},
    {"llist_pop",test_popllist},
    {"dll_create",test_createdll},
    {"dll_add",test_insertdll},
    {"dll_pop",test_popdll},
    {"dll_destroy",test_destroydll},
    {"Hash Table Create",test_createhash},
    {"Hash Table Insert",test_inserthash},
    {"Hash Table Search",test_search},
    {"Hash Table Destroy",test_destroyhash},
    {"Vertex List Copy",test_vertexcopy},
    {nullptr,nullptr},
};
