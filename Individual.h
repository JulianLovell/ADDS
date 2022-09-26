#ifndef _Individual
#define _Individual

#include <string>

class Individual {
    private:
    std::string binaryString;

    public:
    Individual();
    Individual(int length);
    Individual(std::string _binaryString);

    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();

    void setString(std::string DNA);

};

#endif