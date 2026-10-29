#include <iostream>
#include "list.h"
using namespace std;

int main(void) {

    list *myL = new list(50);
    unsigned int n;
    n = myL->getCapacity();
    for (int i = 0; i < n; i++) {
        myL->insert(i);
        myL->add(i);
    }
    myL ->printIt();
    return 0;
}
