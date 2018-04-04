#include <iostream>
#include "List.h"
#include "List.cpp"
#include "Student.h"
#include "Student.cpp"
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    List<int> intList;
    string line;
    ifstream fails;
    fails.open("numbers.txt");
    if (fails.is_open()){
        while(getline(fails, line)){
            int sk = atoi(line.c_str());
            intList.addAtEnd(sk);
        }
        fails.close();
    } else {
        cout << "Nevar atvert failu." << endl;
    }


    cout << "Viss saraksts" << endl;
    intList.printList();
    cout << endl;

    bool isFull = intList.isFull();
    cout << "Saraksts ir pilns - " << boolalpha << isFull << endl;
    cout << "Saraksta garums: " << intList.getSize() << endl;
    cout << endl;

    cout << "Pievieno '45' saraksta beigaas " << endl << endl;
    intList.addAtEnd(45);
    cout << "Viss saraksts" << endl;
    intList.printList();
    cout << "Saraksta garums: " << intList.getSize() << endl;
    cout << endl;

    cout << "Pievieno '23' indeksaa 4 " << endl << endl;
    intList.addByIndex(23, 4);
    cout << "Viss saraksts" << endl;
    intList.printList();
    cout << "Saraksta garums: " << intList.getSize() << endl;
    cout << endl;

    cout << "Dzeesh elementu ar indeksu 2 " << endl << endl;
    intList.deleteByIndex(2);
    cout << "Viss saraksts" << endl;
    intList.printList();
    cout << "Saraksta garums: " << intList.getSize() << endl;
    cout << endl;

    int skInd = intList.returnByIndex(3);
    cout << "Masiiva elements ar indeksu 3: " << endl;
    cout << skInd << endl;
    cout << endl;

    int nextElem = intList.getNextElement(10);
    cout << "Naakamais elements elementam '10' -> " << nextElem << endl;
    cout << endl;

    cout << "Indekss elementam '-3' = " ;
    int indexByValue = intList.findByValue(-3);
    cout << indexByValue << endl;
    cout << endl;

    cout << "Pievieno '9', '14', '-19', '33' saraksta beigaas " << endl << endl;
    intList.addAtEnd(9);
    intList.addAtEnd(14);
    intList.addAtEnd(-19);
    intList.addAtEnd(33);
    cout << "Viss saraksts" << endl;
    intList.printList();
    cout << "Saraksta garums: " << intList.getSize() << endl;
    cout << endl;
    cout << "Pievieno '55' saraksta beigaas " << endl << endl;
    intList.addAtEnd(55);
    cout << endl;
    isFull = intList.isFull();
    cout << "Saraksts ir pilns - " << boolalpha << isFull << endl;


    cout << "Viss saraksts" << endl;
    intList.printList();
    cout << endl;
    intList.sortList();
    cout << "Sakaartots saraksts" << endl;
    intList.printList();
    cout << endl;
    intList.makeEmpty();
    cout << "Tukšs saraksts" << endl;
    intList.printList();
    cout << "* * * * *" << endl;

    int atz1[SIZE] = {8, 8, 7};
    Student st1;
    st1.printInfo();
    st1.setName("Liene");
    st1.setSurname("Apse");
    st1.setGender(st1.whichGender());
    st1.setGrades(atz1);
    st1.printInfo();
    cout << endl;

    int atz2[SIZE] = {5, 8, 7};
    int atz3[SIZE] = {7, 8, 4};
    Student st2("Anna", "Priede", atz2);
    st2.printInfo();
    cout << endl;
    Student st3("Peteris", "Ozols", atz3);
    st3.printInfo();
    cout << endl;

    List<char> charList;
    cout << "Saraksta beigaas pievieno a, d, c, b" << endl;
    charList.addAtEnd('a');
    charList.addAtEnd('d');
    charList.addAtEnd('c');
    charList.addAtEnd('b');
    cout << endl;

    cout << "Sarakstam pievieno 'e' indeksaa 1" << endl;
    charList.addByIndex('e', 1);
    cout << "Viss saraksts " << endl;
    charList.printList();
    cout << endl;

    charList.sortList();
    cout << "Sakartots saraksts " << endl;
    charList.printList();
    cout << endl;

    cout << "Saraksta garums: " << charList.getSize() << endl;
    charList.deleteByIndex(2);
    cout << "Dzeesh elementu ar indeksu 2 " << endl;
    cout << "Viss saraksts " << endl;
    charList.printList();
    cout << endl;

    char nextEl = charList.getNextElement('d');
    cout << "Naakamais elements elementam 'd' -> " << nextEl << endl;
    cout << "Indekss elementam 'b' = " ;
    cout << charList.findByValue('b');
    cout << endl << endl;

    cout << "Saraksta beigaas pievieno c, f, b, i" << endl;
    charList.addAtEnd('c');
    charList.addAtEnd('f');
    charList.addAtEnd('b');
    charList.addAtEnd('i');
    
    cout << "Viss saraksts " << endl;
    charList.printList();
    charList.sortList();
    cout << endl;

    cout << "Sakartots saraksts " << endl;
    charList.printList();

    return 0;
}
