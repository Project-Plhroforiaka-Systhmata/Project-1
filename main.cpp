#include <stdlib.h>
#include "cstdlib"
#include "iostream"
#include "stdio.h"

#include "Record.h"
#include "DoubleLinkedList.h"

using namespace  std;

int main(){
    auto *test = new DoubleLinkedList();
    test->AddNodeToEnd(new Record("test"));
    test->AddNodeToEnd(new Record("test"));
    test->AddNodeToEnd(new Record("test"));
    test->AddNodeToEnd(new Record("test"));
    test->printList();
    return 0;
}