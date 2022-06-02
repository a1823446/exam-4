#include <iostream>
#include <string>
#include "BookStores.h"

using namespace std;

// void BookStores::sort(Dymocks **store, int n)      // sorts the array of n Dymocks in ascending
//  order base on their storeID
void BookStores::sort(Dymocks **store, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (store[j]->get_storeID() > store[j + 1]->get_storeID())
            {
                Dymocks *t = store[j];
                store[j] = store[j + 1];
                store[j + 1] = t;
            }
        }
    }
}