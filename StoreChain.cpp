#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
#include "StoreChain.h"
using namespace std;

StoreChain::StoreChain()               
    /* creates a  store chain containing pointers to 5 BookStore objects as an array; 
    the first and the last elements of the array are pointers to BarnesNoble objects, 
    the rest of the elements are Dymocks
    */
    {
        // for(int i = 0; i < 5; i++){
        //     if(i == 0 || i == 4){
        //         store[i] = new BarnesNoble();
        //     }
        //     else{
        //         store[i] = new Dymocks();
        //     }
        // }
        store[0] = new BarnesNoble("Springfield");
        store[1] = new Dymocks(true);
        store[2] = new Dymocks(false);
        store[3] = new Dymocks(true);
        store[4] = new BarnesNoble("Centerville");

    }

    BookStore **StoreChain::get_bookStores()      // returns the array of pointers to the five BookStore objects
    {
        return store;
    }