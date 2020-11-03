#include "vertex.h"

vertex::vertex(string name): spec(name) {
    specList = new list;
    specList->insert(spec);
}
