#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#define MAX_SIZE 10
using namespace std;


template <class T>
class List
{
private:
    int size; // saraksta garums
    T *_list; // saraksta masivs
public:
    List();
    ~List();
    bool isFull(); // parbauda, vai saraksts ir pilns
    int getSize();
    void addAtEnd(T);
    void addByIndex(T, int); // ievieto padoto elementu attiecigaja indeksa
    void deleteByIndex(int);
    T returnByIndex(int);
    T getNextElement(T); // atgriez dota elementa nakamo elementu
    int findByValue(T);
    void sortList();
    void printList();
    void makeEmpty();

};

#endif // LIST_H_INCLUDED
