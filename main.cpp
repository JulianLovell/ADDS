#include <iostream>
using namespace std;

#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main(){
    Reverse a;
    cout << a.reverseDigit(123) << endl;
    cout << a.reverseString("Barlie") << endl;

    Truckloads b;
    cout << b.numTrucks(5,2) << endl;

    EfficientTruckloads c;
    cout << c.numTrucks(8,4) << endl;
};