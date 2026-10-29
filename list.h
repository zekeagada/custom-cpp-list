#ifndef __LIST_H
#define __LIST_H

class list {
    private:
         unsigned int listCount;
         unsigned int listCapacity;
           int *values;
    public:
          list( unsigned int listCapacity);
          ~list();
          void clear();
          bool insert(int val);
          bool add(int val);
          bool deleteFirst(int &val);
          bool deleteLast(int &val);
          void printIt () const;
          unsigned int getCount() const;
          unsigned int getCapacity() const;
};
#endif    
