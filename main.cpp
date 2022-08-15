#include <iostream>
#include "Computer.h"
#include "RandomComputer.h"

using namespace std;



int main() {

RandomComputer a;

a.makeMove();
cout << a.getMove() << endl;


return 0;
};