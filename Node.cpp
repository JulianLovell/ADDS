#include "Node.h"

using namespace std;

Node::Node() {
    this->data = 0;
    this->next = nullptr;
}

int Node::getData() { return this->data; }

void Node::setData(int _data) { this->data = _data; }

Node* Node::getNext() { return this->next; }

void Node::setNext(Node* _next) { this->next = _next; }