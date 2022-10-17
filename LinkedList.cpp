#include "LinkedList.h"

#include <iostream>

#include "Node.h"

using namespace std;

LinkedList::LinkedList() { this->head = new Node(); }

LinkedList::LinkedList(int array[], int size) {

    head = new Node();

    head->setData(array[0]);

    for(int i = 1; i<size; i++) {

        addEnd(array[i]);

    }

}

Node *LinkedList::getPosition(int position) {
    Node *temp = head;

    for (int i = 1; i < position; i++) {
        temp = temp->getNext();
    }

    return temp;
}

void LinkedList::addFront(int newItem) {
    Node *newNode = new Node();

    newNode->setData(newItem);
    newNode->setNext(head);
    head = newNode;
}

void LinkedList::addEnd(int newItem) {
    Node *newNode = new Node();
    Node *temp = head;

    while (temp->getNext() != nullptr) {
        temp = temp->getNext();
    }

    newNode->setData(newItem);
    temp->setNext(newNode);
}

void LinkedList::addAtPosition(int position, int newItem) {
    Node *newNode = new Node();
    Node *previous = getPosition(position-1);

    newNode->setData(newItem);
    newNode->setNext(previous->getNext());

    previous->setNext(newNode);
}

int LinkedList::search(int item) {
    Node *temp = head;

    for (int i = 1; temp != nullptr; i++) {
        if (temp->getData() == item) {
            cout << i << " ";

            return i;
        }

        temp = temp->getNext();
    }

    cout << 0 << " ";

    return 0;
}

void LinkedList::deleteFront() {
    Node *temp = head;

    head = head->getNext();

    delete temp;
}

void LinkedList::deleteEnd() {
    Node *temp = head;

    while (temp->getNext()->getNext() != nullptr) {
        temp = temp->getNext();
    }

    delete temp->getNext();

    temp->setNext(nullptr);
}

void LinkedList::deletePosition(int position) {
    Node *before = getPosition(position - 1);
    Node *after = getPosition(position);

    before->setNext(after->getNext());

    delete after;
}

int LinkedList::getItem(int position) {
    Node *temp = getPosition(position);

    if (temp == nullptr) {
        cout << INT32_MAX << " ";

        return INT32_MAX;
    }

    cout << temp->getData() << " ";

    return temp->getData();
}

void LinkedList::printItems() {
    Node *temp = head;

    while (temp != nullptr) {
        cout << temp->getData() << " ";

        temp = temp->getNext();
    }

    cout << endl;
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        deleteFront();
    }

    delete head;
}