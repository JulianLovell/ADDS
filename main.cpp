#include <iostream>
#include <string>
using namespace std;

#include "Human.h"
#include "Computer.h"
#include "Referee.h"


int main() {
Human player1;
Computer player2;
Referee Martin;

Martin.refGame(player1, player2);
cout << Martin.result << endl;

return 0;
};