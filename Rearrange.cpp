#include "Rearrange.h"

using namespace std;

Individual* Rearrange::mutate(Individual* person, int k) {
    while (k > person->getLength()) {
        k = k - person->getLength();
    }

    string DNA = person->getString();

    string Edit = "";

    for (int i = (k - 1); i < person->getLength(); i++) {
        Edit.push_back(DNA.at(i));
    }

    DNA.erase(k - 1, (person->getLength() - k + 1));

    person->setString((Edit + DNA));

    return person;
}