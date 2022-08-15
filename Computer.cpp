#include "Computer.h"

Computer::Computer() { this->move = 'I'; }

void Computer::makeMove() { setMove('T'); }

char Computer::getMove() {

return this->move;

}
