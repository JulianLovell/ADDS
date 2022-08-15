using namespace std;

#include "Toolbox.h"

Toolbox::Toolbox() { setMove('I'); }

void Toolbox::makeMove() { setMove('S'); }




void Computer::setMove(char a) { this->move = a; }