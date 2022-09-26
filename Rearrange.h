#ifndef _Rearrange
#define _Rearrange

#include "Mutator.h"

class Rearrange : public Mutator {
    public:

    virtual Individual* mutate(Individual* person, int k) override;
};

#endif