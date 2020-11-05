#ifndef PROJECT_1_HASHTABLE_H
#define PROJECT_1_HASHTABLE_H
#include <string>
#include "bucket.h"

using namespace std;

class hashTable {
public:
    bucket **table;
    int numBuckets;
    int bucketSize;
    int hashFunction(string, int);
    hashTable(int, int);
    void insert(string, vertex*);
    ~hashTable();
};


#endif
