#include<iostream>
#include<conio.h>
#include<sstream>
using namespace std;

class Reverse
{
public:

int reverseDigit(int v)
{
if(v < 0)
{
return -1;
}
static int newNumber = 0;
static int multiplier = 1;
if(v > 0)
{
reverseDigit(v/10);
newNumber += (v%10) * multiplier;
multiplier *= 10;
}
return newNumber;
}

string reverseString(string s)
{
static char *newString = new char[s.length()+1];

reverseStringUtil(s,0,newString);
newString[s.length()] = '\0';

return newString;
}

void reverseStringUtil(string s, int pos, char ps[])
{
if(s[pos] == '\0')
return;
reverseStringUtil(s,pos+1,ps);
int index = s.length()-pos-1;
ps[index] = s[pos];
}

};