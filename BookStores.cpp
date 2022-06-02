#include <iostream>
#include <string>
#include "BookStores.h"

using namespace std;


//void BookStores::sort(Dymocks **store, int n)      // sorts the array of n Dymocks in ascending 
                                                    // order base on their storeID
void BookStores::sort(Dymocks **store, int n) 
{ 
    int i = 0; 
  
    while (i < n) 
    { 
        if (i == 0) 
            i++; 
        if (store[i] >= store[i - 1]) 
            i++; 
        else 
        { 
            swap(store[i], store[i - 1]); 
            i--; 
        } 
    } 
 } 
