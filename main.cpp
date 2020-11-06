#include <stdlib.h>
#include "cstdlib"
#include "iostream"
#include "stdio.h"
#include "DoubleLinkedList.h"


using namespace  std;

int main(){


    DoubleLinkedList *test = new DoubleLinkedList();
    test->AddNodeToEnd(new Record("test"));
    test->printList();
    test->pop();
    test->printList();
    test->~DoubleLinkedList();
    return 0;
}