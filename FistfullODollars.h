using namespace std;

#include "Computer.h"

class FistfullODollars: public Computer {
    private:
    int counter;

    public:
    FistfullODollars();
    virtual void makeMove();
    void setCounter(int a);
    int getCounter();
};