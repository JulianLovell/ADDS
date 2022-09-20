#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;


int main() {
    string input = " ";
    getline(cin, input);
    vector<int> vec;
    
    stringstream ss(input);
 
    while (ss.good()) {
        string temp;
        getline(ss, temp, ',');
        vec.push_back(stoi(temp));
    }

    MapTriple triple;
    MapAbsoluteValue absolute;
    FilterForTwoDigitPositive twoDigitPositive;
    FilterOdd odd;
    ReduceMinimum redMin;
    ReduceGCD redGCD;

    vector<int> vec1 = triple.map(absolute.map(vec));

    vector<int> vec2 = twoDigitPositive.filter(odd.filter(vec1));

    int minValue = redMin.reduce(vec2);
    int gcdValue = redGCD.reduce(vec2);

    cout<<minValue<<" "<<gcdValue<<endl;

    return 0;