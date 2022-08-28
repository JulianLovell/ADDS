#include <iostream>
#include "string"
#include <cmath>
using namespace std;

#include "Reverse.h"

Reverse::Reverse() {};

int Reverse::reverseDigit(int value){

    if(value < 0) {
        cout << "ERROR" << endl;
        return -1;
    };

    if (value < 10){
        return value;
    };

    return pow(10 , (floor(log10(value) + 1)) - 1)*(value % 10) + reverseDigit(value / 10);
};

string Reverse::reverseString(string letters){
    if (letters.size() < 2){
        return letters;
    };

    return letters.at(letters.size()-1) + reverseString(letters.substr(0, letters.size()-1));
};