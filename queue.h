#ifndef MYQUEUE_H_INCLUDED
#define MYQUEUE_H_INCLUDED
#include "mynode.h"
using namespace std;

template <class Type>
class queue {
    Node<Type>* front; // raadiitaajs, kas norada, kur ir rindas saakums
    Node<Type>* rear; // raadiitaajs, kas norada, kur ir rindas beigas
    Node<Type>* current;
    Node<Type>* next;
public:
    queue();
    queue(int);
    ~queue();
    // Pievieno elementu rindas nulltaja pozicija
    void enqueue(Type item);
    // Iznem elementu no rindas
    Type dequeue();
    // Atgriez rindas sakuma elementu
    Type inFront();
    // Atgriez rindas beigu elementu
    Type inBack();
    // Parbauda, vai rinda ir tuksa
    bool isEmpty();
    // Parbauda, vai rinda ir pilna
    bool isFull();
    // Iztukso rindu
    void makeEmpty();
    // Izvada rindu uz ekrana
    void printQueue();
};






#endif
