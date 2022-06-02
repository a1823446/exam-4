#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
using namespace std;


int Dymocks::nextNumStores=0;
Dymocks::Dymocks(){
    nextNumStores++;
}
Dymocks::Dymocks(string n, string a, int b)   // creates a BookStore name n, address a, and number of books in the store b
{
    name = n;
    address = a;
    numBook = b;
    nextNumStores++;
}
Dymocks::Dymocks(bool t){
    isOnline = t;
}
void Dymocks::set_storeID(int id){
    storeID = id;
}
int Dymocks::get_storeID(){
    return storeID;
}
void Dymocks::set_isOnline(bool online){
    isOnline = online;
}
bool Dymocks::get_isOnline(){
    return isOnline;
}
int Dymocks::get_nextNumStores(){
    return nextNumStores;
}
float Dymocks::get_onlineTax(){
    if (isOnline)
        return 500;
    else
        return 0;
}