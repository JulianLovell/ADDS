using namespace std;

#include "Human.h"
#include "Computer.h"
#include "RandomComputer.h"
#include "Referee.h"

Referee::Referee() {this->result = '?';};

char Referee::refGame(Computer Randy, Computer Cassie) {

    Randy.makeMove();
    Cassie.makeMove();

    if (player1.move == player2.move){
        this->result = 'T';
        return this->result;
    };

    if ((player1.move == 'R' && player2.move == 'P')|| 
        (player1.move == 'P' && player2.move == 'S')||
        (player1.move == 'S' && player2.move == 'R')){
        this->result = 'L';
        return this->result;
    };

    if ((player1.move == 'R' && player2.move == 'S')|| 
        (player1.move == 'P' && player2.move == 'R')||
        (player1.move == 'S' && player2.move == 'P')){
        this->result = 'W';
        return this->result;
    };

    return '?';

};

