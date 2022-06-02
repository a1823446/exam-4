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
        void set_name(string n);
        void set_address(string a);
        void set_numBook(int b);
        string get_name();
        string get_address();
        int get_numBook();
        void print();
        virtual float get_onlineTax();        
};

#endif