#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <string>

using namespace std;

class Node
{

    friend class Player;
public:
    Node() {};
    Node(const string x): data(x), nextPtr(0) {};
    void setData (string x) { data = x; };
    void setNext (Node *y) { nextPtr = y; };
    string getData() const { return data; };
    Node* getNext() const { return nextPtr;};

private:

    string data;
    Node *nextPtr;


};

#endif // NODE_H_INCLUDED
