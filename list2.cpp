#include <iostream>
#include "list.h"
using namespace std;

list::list (unsigned int listCapacity) {
        this -> listCapacity = listCapacity;
        listCount = 0;
        values = new int[listCapacity];
}

list::~list() {
   if (values) {
       delete[] values;
       values = NULL;
   }
}
void list::clear(){
        listCount = 0;
}

bool list::insert (int val) {
     bool rc = listCount < listCapacity;
     if (rc) {
         for (unsigned int to = listCount; to > 0; to--) {
         unsigned int from = to - 1;
         values[to] = values[from];
     }
         values[0] = val;
         listCount++;
     }
         return rc;
}

bool list::add (int val) {
     bool rc = listCount < listCapacity;
     if (rc) {
         values[listCount] = val;
         listCount++;
     }
         return rc;
}

bool list::deleteFirst(int &val) {
        bool rc = listCount > 0;
        if (rc) {
           val = values[0];
           listCount--;
           for (unsigned int to = 0; to < listCount; to++) {
           unsigned int from = to + 1 ;
           values[to] = values[from];
        }
     }
      return rc;
 }

bool list::deleteLast(int &val) {
        bool rc = listCount > 0;
        if (rc) {
           listCount--;
           val = values[listCount];
   }
   return rc;
}
void list::printIt() const {
    for (unsigned int i = 0; i < listCount; i++)
        cout << i << ": " << values [i] << endl;
}

unsigned int list::getCount() const {
             return listCount;
}

unsigned int list::getCapacity() const{
             return listCapacity;
}

