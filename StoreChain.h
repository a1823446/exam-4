#ifndef STORECHAIN_H
#define STORECHAIN_H
#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
using namespace std;


class StoreChain{
    protected:
        BookStore* store[5];
    public:
    StoreChain();
    BookStore **get_bookStores();      // returns the array of pointers to the five BookStore objects
    
};

#endif