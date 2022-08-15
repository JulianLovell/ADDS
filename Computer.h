#ifndef _Computer
#define _Computer

class Computer{
    private:
        char move;
    
    public:
        Computer();
        virtual void makeMove();
        virtual char getMove();
        virtual void setMove(char a);

};
#endif