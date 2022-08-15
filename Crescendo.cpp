using namespace std;

#include "Crescendo.h"

Crescendo::Crescendo() { setMove('I'); setCounter(0); }

void Crescendo::makeMove() {
    if (this->counter == 0){
        setMove('P');
    };

    if (this->counter == 1){
        setMove('S');
    };

    if (this->counter == 2){
        setMove('R');
    };

    this->counter = (counter +1) % 3;
};

void Crescendo::setCounter(int a) {this->counter = a;}

int Crescendo::getCounter() {return this->counter;}

