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
void BookStore::set_name(string n){
    name = n;
}
void BookStore::set_address(string a){
    address = a;
}
void BookStore::set_numBook(int b){
    numBook = b;
}
string BookStore::get_name(){
    return name;
}
string BookStore::get_address(){
    return address;
}
int BookStore::get_numBook(){
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