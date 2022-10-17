#ifndef _Node
#define _Node

class Node {
    private:
        int data;
        Node *next;
    
    public:
        Node();
        int getData();
        void setData(int _data);

        Node* getNext();
        void setNext(Node* _next);

};

#endif