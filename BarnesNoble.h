#ifndef BARNESNOBLE_H
#define BARNESNOBLE_H
#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
using namespace std;


class BarnesNoble: public Dymocks {
    protected:
        int numSoldBooks=0;

    public:
        BarnesNoble();          // inherit from base class default constructor    
        BarnesNoble(string n);  // set name n  
                       // should call the corresponding constructor from the parent class
                       // with the online parameter being false

        void soldBook();   // increments numSoldBooks
        int get_numSoldBooks(); // returns the books sold
};

#endif