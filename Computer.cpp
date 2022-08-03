#include <iostream>
#include <string>
using namespace std;

#include "Computer.h"


Computer::Computer() { this->move = '?';};

char Computer::makeMove() {

this->move = 'R';

return this->move;
};