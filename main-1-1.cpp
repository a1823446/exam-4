#include <iostream>
#include <string>
#include "BookStore.h"
using namespace std;

int main() {
    BookStore bs1("BookStore1", "Address1", 100);
    BookStore bs2;
    bs2.setName("English Book House");
    bs2.setAddress("Sec 17");
    bs2.setNumBook(84);
    cout << bs1.getName() << endl;
    cout << bs1.getAddress() << endl;
    cout << bs1.getNumBook() << endl;
    cout << bs2.getName() << endl;
    cout << bs2.getAddress() << endl;
    cout << bs2.getNumBook() << endl;
    
    return 0;
}