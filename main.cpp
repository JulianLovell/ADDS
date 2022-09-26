#include <iostream>
using namespace std;

#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"

Individual *execute(Individual *indPtr, Mutator *mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}

int main() {
    string binarystr1;
    int k1;
    string binarystr2;
    int k2;

    cin >> binarystr1 >> k1 >> binarystr2 >> k2;

    Individual *One = new Individual(binarystr1);
    Individual *Two = new Individual(binarystr2);

    BitFlip *BitFlipPtr = new BitFlip();
    Rearrange *RearrangePtr = new Rearrange();

    One = execute(One, BitFlipPtr, k1);

    Two = execute(Two, BitFlipPtr, k2);

    cout << One->getString() << " " << Two->getString() << " " << Two->getMaxOnes() << endl;

    return 0;
}