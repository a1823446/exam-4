#include <iostream>
#include <string>
#include "BookStore.h"
using namespace std;

BookStore::BookStore(){

}
BookStore::BookStore(string nam, string adr, int num){
    name = nam;
    address = adr;
    numBook = num;
} 
void BookStore::setName(string n){
    name = n;
}
void BookStore::setAddress(string a){
    address = a;
}
void BookStore::setNumBook(int b){
    numBook = b;
}
string BookStore::getName(){
    return name;
}
string BookStore::getAddress(){
    return address;
}
int BookStore::getNumBook(){
    return numBook;
}

float BookStore::get_onlineTax(){
    return 0;
}        
void BookStore::print(){
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Number of books: " << numBook << endl; 
}