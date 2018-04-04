#include "queue.h"
#include <iostream>
using namespace std;

template <class Type>
queue<Type>::queue(){
    front = NULL;
    rear = NULL;
}

template <class Type>
queue<Type>::~queue(){
    current = front;
    while(current != 0 ) {
        next = current->next;
        delete current;
        current = next;
    }
    front = 0;
}

template <class Type>
void queue<Type>::enqueue(Type item){
    current = new Node<Type>;
    current->data = item;
    current->next = NULL;
    if(isEmpty()) {
        front = current;
        rear = current;
    } else {
        next = rear;
        rear->next = current;
        rear = current;
    }
}

template <class Type>
Type queue<Type>::dequeue(){
    Type item;
    if (isEmpty()){
        cout << "Queue is empty" << endl;
    } else {
        current = front;
        item = current->data;
        front = front->next;
        delete current;
    }
    return item;
}
/*
template <class Type>
Type queue<Type>::inFront(){

}

template <class Type>
Type queue<Type>::inBack(){

} */

template <class Type>
bool queue<Type>::isEmpty(){
    if (rear == NULL){
        return true;
    } else {
        return false;
    }
}
/*
template <class Type>
bool queue<Type>::isFull(){
    if (rear == size){
        return true;
    } else {
        return false;
    }
}

template <class Type>
void queue<Type>::makeEmpty(){

}

template <class Type>
void queue<Type>::printQueue(){

} */
