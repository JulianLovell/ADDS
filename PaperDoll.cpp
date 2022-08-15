using namespace std;

#include "PaperDoll.h"


PaperDoll::PaperDoll() { this->move = '?';};

char PaperDoll::makeMove() {    

for(int i = 0; i < 2; i++){
    if (i == 0){
        this->move = 'P';
    }

    else if (i == 1){
        this->move = 'S';
    }

    else if (i == 2){
        this->move = 'S';
    }
    return this->move;}
};