#include "Computer.h"

Computer::Computer() { this->move = 'I'; }

void Computer::makeMove() { setMove('T'); }

char Computer::getMove() {

return this->move;

}

void Computer::setMove(char a) { this->move = a; }