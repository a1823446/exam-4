#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
using namespace std;

int main() {
    Dymocks dymocks1("P BOOK HOUSE", "@2", 324);
    Dymocks dymocks2;
    dymocks2.setName("PU");
    dymocks2.setAddress("22@2");
    dymocks2.setNumBook(31324);
    cout << dymocks1.getName() << endl;
    cout << dymocks1.getAddress() << endl;
    cout << dymocks1.getNumBook() << endl;
    cout << dymocks2.getName() << endl;
    cout << dymocks2.getAddress() << endl;
    cout << dymocks2.getNumBook() << endl;
    dymocks2.set_isOnline(true);
    cout << dymocks2.get_isOnline() << endl;
    cout << dymocks2.get_onlineTax() << endl;
    dymocks1.set_isOnline(false);
    cout << dymocks1.get_isOnline() << endl;
    cout << dymocks1.get_onlineTax() << endl;
    cout<<dymocks2.get_nextNumStores();
    return 0;
}