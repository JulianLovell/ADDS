#include <array>
#include <iostream>
#include <string>

#include "LinkedList.h"

using namespace std;

bool is_number(const std::string& s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main() {
    string input;
    cin >> input;
    int* numbers = new int[100];
    int count = 0;
    while (is_number(input)) {
        numbers[count++] = stoi(input);
        cin >> input;
    }

    string operation = input;

    cin >> input;
    int param1 = stoi(input);
    cin >> input;
    int param2 = stoi(input);

    LinkedList* list = new LinkedList(numbers, count);
    if (operation == "AF") {
        // add front
        list->addFront(param1);
    } else if (operation == "AE") {
        list->addEnd(param1);
    } else if (operation == "AP") {
        list->addAtPosition(param1, param2);
    } else if (operation == "S") {
        list->search(param1);
    } else if (operation == "DF") {
        list->deleteFront();
    } else if (operation == "DE") {
        list->deleteEnd();
    } else if (operation == "DP") {
        list->deletePosition(param1);
    } else if (operation == "GI") {
        list->getItem(param1);
    }
    list->printItems();
}