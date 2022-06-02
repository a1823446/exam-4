#ifndef BOOKSTORES_H
#define BOOKSTORES_H
#include <iostream>
#include <string>
#include "Dymocks.h"
using namespace std;
class BookStores {
    public:
        static void sort(Dymocks **store, int n);      // sorts the array of n Dymocks in ascending 
                                              // order base on their storeID

};

#endif