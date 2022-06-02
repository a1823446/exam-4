#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include <iostream>
#include <string>
using namespace std;

class BookStore
{ 
    protected:
        string name;
        string address;
        int numBook;

    public:
        BookStore();
        BookStore(string n, string a, int b);   // creates a BookStore name n, address a, and number of books in the store b
        void setName(string n);
        void setAddress(string a);
        void setNumBook(int b);
        string getName();
        string getAddress();
        int getNumBook();
        void print();
        virtual float get_onlineTax();        
};

#endif