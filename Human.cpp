#include <iostream>
#include <string>
using namespace std;

#include "Human.h"

Human::Human() {this->move = '?';};

char Human::makeMove() {

cout << "Make Move: ";
cin >> this->move;

return this->move;
};