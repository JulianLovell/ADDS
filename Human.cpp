#include <iostream>
#include <string>
using namespace std;

#include "Human.h"

Human::Human() {this->move = '?';};

char Human::makeMove() {

cout << "Make move: ";
cin >> this->move;

while (this->move != 'R' && this->move != 'P' && this->move != 'S'){
    cout << "Invalid. Please enter R, P or S." << endl << "Make a new move:";
    cin >> this->move;

};

return this->move;
};