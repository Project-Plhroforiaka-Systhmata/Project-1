#include <iostream>
#include "string.h"

#include "Record.h"

using namespace std;

void Record::print() {
    cout << "Test String: " << testStr << endl;
}

Record::Record() {
    testStr = strdup("");
}

Record::Record(char *data) {
    testStr = strdup(data);
}
