#ifndef _BubbleSort
#define _BubbleSort

#include <vector>

#include "Sort.h"

class BubbleSort : public Sort {
   public:
    BubbleSort(){};
    virtual std::vector<int> sort(std::vector<int> list);
};

#endif