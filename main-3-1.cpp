#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
#include "StoreChain.h"
using namespace std;

int main() {
    StoreChain chain;
    BookStore **store = chain.get_bookStores();
    for(int i = 0; i < 5; i++){
        store[i]->print();
    }


    
    return 0;
}