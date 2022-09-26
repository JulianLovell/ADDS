#ifndef _Mutator
#define _Mutator

#include "Individual.h"

class Mutator : public Individual {
    public:

    virtual Individual* mutate(Individual* person, int k) = 0;
};

#endif