#ifndef MYNODE_H_INCLUDED
#define MYNODE_H_INCLUDED
#include <iostream>
using namespace std;

template <class Type>
struct Node {
    Type data;
    Node<Type>* next;
};

#endif // MYNODE_H_INCLUDED
