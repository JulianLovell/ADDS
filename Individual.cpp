#include <string>

#include "Individual.h"

using namespace std;

Individual::Individual(){}

Individual::Individual(int length) {
    for (int i = 0; i < length; i++) {
        this->binaryString.push_back('0');
    }
}

Individual::Individual(string _binaryString) {
    this->binaryString = _binaryString;
}

string Individual::getString() {
    return this->binaryString;
}

int Individual::getBit(int pos) {
    if (pos > this->binaryString.length()) {
        return -1;
    }

    if (this->binaryString.at(pos) == '0') {
        return 0;
    } else

        return 1;
}

void Individual::flipBit(int pos) {
    if (pos > this->binaryString.length()) {
        return;
    }

    if (this->binaryString.at(pos) == '0') {
        this->binaryString.at(pos) = '1';

    } else

        this->binaryString.at(pos) = '0';
}

int Individual::getMaxOnes() {
    int currentStreak = 0;
    int maxStreak = 0;

    for (int i = 0; i < this->binaryString.length(); i++) {
        if (this->binaryString.at(i) == '1') {
            currentStreak++;

        } else

            currentStreak = 0;

        if (currentStreak > maxStreak) {
            maxStreak = currentStreak;
        }
    }

    return maxStreak;
}

int Individual::getLength() {
    return this->binaryString.length();
}

void Individual::setString(std::string DNA) { this->binaryString = DNA; }