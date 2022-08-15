using namespace std;

#include "FistfullODollars.h"

FistfullODollars::FistfullODollars() { setMove('I'); setCounter(0); }

void FistfullODollars::makeMove() {
    if (this->counter == 0){
        setMove('R');
    };

    if (this->counter == 1){
        setMove('P');
    };

    if (this->counter == 2){
        setMove('P');
    };

    this->counter = (counter +1) % 3;
};

void FistfullODollars::setCounter(int a) {this->counter = a;}

int FistfullODollars::getCounter() {return this->counter;}

