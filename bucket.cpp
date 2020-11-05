#include "bucket.h"
#include <iostream>

bucket::bucket() : maxRecords(4), currentRecords(0) {
    records = new record[maxRecords];
    next = NULL;
}

bucket::~bucket() {
    for (int i = 0; i < currentRecords; i++) {
        delete records[i].spec;
    }
    delete []records;
}