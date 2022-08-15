#ifndef _Bureaucrat
#define _Bureaucrat

#include "Computer.h"

class Bureaucrat : public Computer {
    public:
        Bureaucrat();
        virtual void makeMove();

};

#endif