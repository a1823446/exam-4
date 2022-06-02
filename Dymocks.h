#ifndef DYMOCKS_H
#define DYMOCKS_H
#include <iostream>
#include <string>
#include "BookStore.h"
using namespace std;


class Dymocks: public BookStore {

        protected:
            int storeID;
            bool isOnline;
            static int nextNumStores;

         
        public:
        Dymocks();
        Dymocks(string n, string a, int b);   // creates a BookStore name n, address a, and number of books in the store b
        Dymocks(bool t);
        void set_storeID(int id);
        int get_storeID();
        void set_isOnline(bool online);
        bool get_isOnline();
        static int get_nextNumStores();
        virtual float get_onlineTax();
        //virtual float get_onlineTax() = 0;        
};

#endif