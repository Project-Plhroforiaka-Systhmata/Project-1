#include <stdlib.h>
#include "cstdlib"
#include "iostream"
#include "stdio.h"
#include "DoubleLinkedList.h"
#include "hashTable.h"


using namespace  std;

int main(){
    vertex *testvert = new vertex("1", "hdgj");
    hashTable *test = new hashTable(5);
    test->insert("1", testvert);
    delete test;
    cout<<"HEY SKAN"<<endl;
    return 0;
}
