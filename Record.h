
#ifndef PROJECT_1_RECORD_H
#define PROJECT_1_RECORD_H
#include <iostream>

#include "string.h"

class Record {

public:
    char *testStr;
    void print(){
        std::cout << "Test String: " << testStr << std::endl;
    }
    Record(){
        testStr = strdup("");
    }
    Record(char *data){
        testStr = strdup(data);
    }
};


#endif //PROJECT_1_RECORD_H
