using namespace std;

#include "RandomComputer.h"
#include <cstdlib>
#include <ctime>

RandomComputer::RandomComputer() { 
    setMove('I'); 
    srand(time(NULL));
}

void RandomComputer::makeMove() { 
    
    int randNum = (rand() % 3);
    
    if(randNum == 0) {
        setMove('P'); 
    };

    if(randNum == 1) {
        setMove('R'); 
    };
    
    if(randNum == 2) {
        setMove('S'); 
    };
    
    }