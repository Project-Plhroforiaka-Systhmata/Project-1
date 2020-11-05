#include "DoubleLinkedList.h"
#include "Record.h"

#include "string.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList() {
    first = nullptr;
    last = nullptr;
}

Node* DoubleLinkedList::AddNodeToEnd(Record *data) {
    Node *newNode = new Node();
    newNode->rec = data;
    length++;
    if (this->last != nullptr){
        this->last->next = newNode;
        this->last->next->prev = this->last;
        this->last = newNode;
        return this->last;
    }else{
        this->first = newNode;
        this->last  = newNode;
        return this->last;
    }
}

DoubleLinkedList::~DoubleLinkedList() {
    Node *iterate = this->first;
    while (iterate != nullptr){
        auto* tmp = iterate;
        iterate = iterate->next;
        delete tmp;
    }
    delete this;
}

void DoubleLinkedList::printList() {
    Node *iterate = this->first;
    while (iterate != nullptr){
        iterate->rec->print();
        iterate = iterate->next;
    }
}