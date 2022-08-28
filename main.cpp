#include <iostream>

#include <cmath>

#include <vector>

#include <string>

#include <bits/stdc++.h>

using namespace std;

class Reverse

{

public:

int reverseUtilDigit(int n)

{

int digit = (int) log10(n);

if(n < 0)

return -1;

else if(n == 0)

return 0;

return ((n % 10 * pow(10, digit)) + reverseUtilDigit(n / 10));

}

int reverseDigit(int n)

{

int rev = reverseUtilDigit(n);

string reversed = to_string(rev);

for(int i = 0; i < reversed.length() - 1; i++)

{

if(reversed[i] == '0' && reversed[i + 1] != '0')

reversed[i] = '\0';

}

return stod(reversed);

}

string reverseStringUtil(string str ,int size)

{

if (size == -1)

return "";

else

{

char a;

a=str[size];

if (' ' == a )

return reverseStringUtil(str,size-1);

else

return a + reverseStringUtil(str,size-1);

}

}

string reverseString(string letters)

{

string rev = reverseStringUtil(letters, letters.length());

return (rev);

}

};

class Fibonacci

{

public:

int getNthFibonacci(int n)

{

if(n < 0)

return -1;

else if(n ==0 || n == 1)

return n;

else

return(getNthFibonacci(n - 1) + getNthFibonacci(n - 2));

}

};

class EfficientFibonacci

{

private:

vector<int> calculatedNthNumbers;

vector<int> calculatedNumbers;

public:

int getNthFibonacciUtil(int n)

{

if(n < 0)

return -1;

else if(n ==0 || n == 1)

return n;

else

return(getNthFibonacciUtil(n - 1) + getNthFibonacciUtil(n - 2));

}

int getNthFibonacci(int n)

{

bool found = false;

int nthIndex = -1;

for(int i = 0; i < calculatedNthNumbers.size(); i++)

{

if(calculatedNthNumbers[i] == n)

{

found = true;

nthIndex = i;

break;

}

}

if(found)

{

return(calculatedNumbers[nthIndex]);

}

else

{

calculatedNthNumbers.push_back(n);

int fibo = getNthFibonacciUtil(n);

calculatedNumbers.push_back(fibo);

return fibo;

}

}

};

bool isNumber(string s);

int main()

{

string reverseDigit = "", reverseString = "", fibo = "", efficientFibo = "", out = "";

int digitToReverse;

string stringToReverse;

int nthFibonacci, nthEfficientFibonacci;

string input1, input2, input3, input4;

cout << endl << "Input: ";

cin >> input1 >> stringToReverse >> input3 >> input4;

if(isNumber(input1))

{

digitToReverse = stod(input1);

if(Reverse().reverseDigit(digitToReverse) == -1)

reverseDigit = "ERROR";

else

reverseDigit = to_string(Reverse().reverseDigit(digitToReverse));

}

else

reverseDigit = "ERROR";

reverseString = Reverse().reverseString(stringToReverse);

if(isNumber(input3))

{

nthFibonacci = stod(input3);

if(Fibonacci().getNthFibonacci(nthFibonacci) == -1)

fibo = "ERROR";

else

fibo = to_string(Fibonacci().getNthFibonacci(nthFibonacci));

}

else

fibo = "ERROR";

if(isNumber(input4))

{

nthEfficientFibonacci = stod(input4);

if(EfficientFibonacci().getNthFibonacci(nthEfficientFibonacci) == -1)

efficientFibo = "ERROR";

else

efficientFibo = to_string(EfficientFibonacci().getNthFibonacci(nthEfficientFibonacci));

}

else

efficientFibo = "ERROR";

cout << "Output: " << reverseDigit << " " << reverseString << " " << fibo << " " << efficientFibo << endl;

return 0;

}

bool isNumber(string s)

{

for (int i = 0; i < s.length(); i++)

if (isdigit(s[i]) == false)

return false;

return true;

}