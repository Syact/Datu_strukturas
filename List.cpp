#include <iostream>
#include "List.h"
#include "Student.h"
using namespace std;

template <class T>
List<T>::List(){
    size = 0;
    _list = new T[MAX_SIZE];
}
template <class T>
List<T>::~List(){
    delete _list;
    size = 0;
}
template <class T>
bool List<T>::isFull(){
    if (size == MAX_SIZE){
      return true;
    } else {
      return false;
    }
}
template <class T>
int List<T>::getSize(){
    return size;
}
template <class T>
void List<T>::addAtEnd(T newEl){
    if (!isFull()){
        _list[size] = newEl;
        size++;
    } else {
      cout << "Saraksts jau ir pilns!" << endl;
    }
}
template <class T>
void List<T>::addByIndex(T newEl, int index){
    if (index >= 0 && index < size && !isFull()){
        for (int i = size; i > index; i--){
            _list[i] = _list[i - 1];
        }
        _list[index] = newEl;
        size++;
    } else if (index == size && !isFull()){
        _list[index] = newEl;
        size++;
    } else {
      cout << "Elementu nevar pievienot! " << endl;
    }

}
template <class T>
void List<T>::deleteByIndex(int index){
    if (index >= 0 && index < size){
        for (int i = index; i < size; i++){
            _list[i] = _list[i + 1];
        }
        size--;
    }
}
template <class T>
T List<T>::returnByIndex(int index){
    if (index >= 0 && index < size){
        return _list[index];
    } else {
        cout << "Nepareizs indekss" << endl;
        return -1;
    }
}
template <class T>
T List<T>::getNextElement(T elem){
    int i = 0;
    while(i < size){
      if(_list[i] == elem){
          if( (i + 1) != size){
              return _list[i + 1];
          } else {
              cout << "Dotais elements ir peedeejais." << endl;
              return 0;
          }
      }
      i++;
    }
    cout << "Sarakstaa nav dotaa elementa." << endl;

    return 0;
}
template <class T>
int List<T>::findByValue(T value){
    int i = 0;
    while(i < size){
        if(_list[i] == value){
            return i;
      }
      i++;
    }
    cout << "Sarakstaa nav dotaa elementa." << endl;
    return 0;
}
template <class T>
void List<T>::sortList(){
    for (int i = 0; i < (size - 1); i++){
        for (int j = 0; j < (size-i-1); j++){
            if (_list[j] > _list[j+1]){
                T temp = _list[j];
                _list[j] = _list[j+1];
                _list[j+1] = temp;
            }
        }
    }
}
template <class T>
void List<T>::printList(){
    for (int i = 0; i < size; i++){
      cout << _list[i] << " ";
    }
    cout << endl;
}
template <class T>
void List<T>::makeEmpty(){
    size = 0;
}
