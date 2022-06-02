#include <iostream>
#include <string>
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
using namespace std;

int main() {
    BarnesNoble bn("Barnes & Noble");
    bn.set_isOnline(true);
    bn.soldBook();
    cout << bn.get_numSoldBooks() << endl;
    cout << bn.get_onlineTax() << endl;
    


    return 0;
}