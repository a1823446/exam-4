#include <iostream>
#include <string>
#include "BookStores.h"

using namespace std;


//void BookStores::sort(Dymocks **store, int n)      // sorts the array of n Dymocks in ascending 
                                                    // order base on their storeID
void BookStores::sort(Dymocks **store, int n) 
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(store[j]->get_storeID() > store[j+1]->get_storeID()){
                Dymocks *temp = store[j];
                store[j] = store[j+1];
                store[j+1] = temp;
            }
        }
    }
}
// { 
//     int i = 0; 
  
//     while (i < n) 
//     { 
//         if (i == 0) 
//             i++; 
//         if (store[i] >= store[i - 1]) 
//             i++; 
//         else 
//         { 
//             swap(store[i], store[i - 1]); 
//             i--; 
//         } 
//     } 
//  } 
