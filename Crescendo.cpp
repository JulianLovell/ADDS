using namespace std;

#include "Crescendo.h"


Crescendo::Crescendo() { this->move = '?';};

char Crescendo::makeMove() {

for(int i = 0; i < 2; i++){
    if (i == 0){
        this->move = 'P';
        return this->move;
    };

    if (i == 1){
        this->move = 'S';
        return this->move;
    };

    if (i == 2){
        this->move = 'R';
        return this->move;
    };
};
return '?';
};

