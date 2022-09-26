#ifndef _BitFlip
#define _BiyFlip

#include "Mutator.h"

class BitFlip : public Mutator {
    public:

    virtual Individual* mutate(Individual* person, int k) override;
};

#endif