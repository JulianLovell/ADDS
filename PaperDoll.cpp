using namespace std;

#include "PaperDoll.h"

PaperDoll::PaperDoll() { setMove('I'); setCounter(0); }

void PaperDoll::makeMove() {
    if (this->counter == 0){
        setMove('P');
    };

    if (this->counter == 1){
        setMove('S');
    };

    if (this->counter == 2){
        setMove('S');
    };

    this->counter = (counter +1) % 3;
};

void PaperDoll::setCounter(int a) {this->counter = a;}

int PaperDoll::getCounter() {return this->counter;}

