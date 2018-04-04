#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <string>
#include "List.h"
using namespace std;
static const int SIZE = 3; // atzimju masiva izmers

class Student
{
private:
    int id;
    string name;
    string surname;
    char gender;
    int* grades;
public:
    Student();
    Student(string, string, int*);
    ~Student();

    int getID() const;
    string getName() const;
    string getSurname() const;
    char getGender() const;
    int* getGrades() const;

    void setID(int id);
    void setName(string name);
    void setSurname(string surname);
    void setGender(char gender);
    void setGrades(int array[]);

    char whichGender(); // pec studenta varda tiek noteikts ta dzimums
    int generateID(); // tiek generets unikals ID
    double averageGrade(int* array);
    void printInfo();

};

#endif // STUDENT_H_INCLUDED
