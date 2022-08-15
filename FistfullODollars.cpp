using namespace std;

#include "FistfullODollars.h"


FistfullODollars::FistfullODollars() { this->move = '?';};

char FistfullODollars::makeMove() {

for(int i = 0; i < 2; i++){
    if (i == 0){
        this->move = 'R';
    }

    else if (i == 1){
        this->move = 'P';
    }

    else if (i == 2){
        this->move = 'P';
    }
    return this->move;}
};