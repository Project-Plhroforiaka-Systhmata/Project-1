#include <sstream>
#include <iostream>
#include "hashTable.h"

hashTable::hashTable(int buckets, int size) : numBuckets(buckets), bucketSize(size) {
    table = new bucket*[numBuckets];
    //create the requested number of buckets
    for (int i = 0; i < numBuckets; i++) {
        table[i] = new bucket;
    }
}

int hashTable::hashFunction(string key, int buckets) {
    stringstream num(key);
    int hashKey;
    num >> hashKey;
    return hashKey % buckets;
}

void hashTable::insert(string key, vertex *vertSpec) {
    int index = hashFunction(key, numBuckets);
    bucket *temp = table[index];
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->records[table[index]->currentRecords].spec = vertSpec;       //change record's data
    temp->currentRecords++;         //increase current records counter
    if (temp->currentRecords == temp->maxRecords) {
        temp->next = new bucket;
    }
}
