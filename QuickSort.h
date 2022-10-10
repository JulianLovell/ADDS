#ifndef _QuickSort
#define _QuickSort

#include <vector>

#include "Sort.h"

class QuickSort : public Sort {
   public:
    QuickSort(){};
    virtual std::vector<int> sort(std::vector<int> list);
};

#endif