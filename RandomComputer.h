#ifndef _RandomComputer
#define _RandomComputer

#include "Computer.h"

class RandomComputer : public Computer {
    public:
        RandomComputer();
        virtual void makeMove();

};

#endif