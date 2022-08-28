#include <iostream>
#include "string"
#include <cmath>
using namespace std;

#include "Truckloads.h"

Truckloads::Truckloads() {};

int Truckloads::numTrucks(int crates = 8, int loadSize = 2){

    int crates1;
    int crates2;

    if(crates < 1){
        cout << "ERROR" << endl;
        return 0;
    };

    if(crates <= loadSize) {
        return 1;
    };

    if (crates % 2 == 00){
        crates1 = crates / 2;
        crates2 = crates / 2;
    }
    else {
        crates1 = crates / 2;
        crates2 = crates1 + 1;
    };

    return numTrucks(crates1, loadSize) + numTrucks(crates2, loadSize);
};