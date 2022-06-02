#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
using namespace std;

BarnesNoble::BarnesNoble()          // inherit from base class default constructor    
{

}        
BarnesNoble::BarnesNoble(string n)  // set name n  
{
    name = n;
    Dymocks();
    set_isOnline(false);
}                       // should call the corresponding constructor from the parent class
                       // with the online parameter being false

void BarnesNoble::soldBook()   // increments numSoldBooks
{
    numSoldBooks++;
}
int BarnesNoble::get_numSoldBooks() // returns the books sold
{
    return numSoldBooks;
}