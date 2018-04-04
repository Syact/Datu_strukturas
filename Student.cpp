#include <iostream>
#include <string>
#include "List.h"
#include "Student.h"
using namespace std;

static int idGenKey; // ID generesanai nepieciesamais statiskais mainigais

Student::Student(){
    id = generateID();
    name = "";
    surname = "";
    gender = '\0';
    grades = new int[SIZE];
}
Student::Student(string name, string surname, int* array){
    this->id = generateID();
    this->name = name;
    this->surname = surname;
    gender = whichGender();
    grades = new int[SIZE];
    for (int i = 0; i < SIZE; i++){
        grades[i] = array[i];
    }
}
Student::~Student(){
    delete[] grades;
}
int Student::getID() const{
    return id;
}
string Student::getName() const{
    return name;
}
string Student::getSurname() const{
    return surname;
}
char Student::getGender() const{
    return gender;
}
int* Student::getGrades() const{
    return grades;
}
void Student::setID(int id){
    if (id < 0){
        id = 0;
    }
    this->id = id;
}
void Student::setName(string name){
    this->name = name;
}
void Student::setSurname(string surname){
    this->surname = surname;
}
void Student::setGender(char gender){
    this->gender = whichGender();
}
void Student::setGrades(int array[]){
    for (int i = 0; i < SIZE; i++){
        grades[i] = array[i];
    }
}
char Student::whichGender(){
    int s = name.size() - 1;
    if (name[s] == 's' || name[s] == 'o'){
        gender = 'm';
    } else if (name[s] == 'a' || name[s] == 'e'){
        gender = 'f';
    } else {
        gender = '#';
    }
    return gender;
}
// ID generesanai tiek izmantots ieprieks definets statisks mainigais
int Student::generateID(){
    if(idGenKey < 0 ){
        idGenKey = 0;
    }
    int baseNum = 100000;
    idGenKey++;
    return baseNum + idGenKey;
}
double Student::averageGrade(int* array){
    double sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += array[i];
    }
    return (sum / SIZE);
}
void Student::printInfo(){
    cout << "Name: " << name << ", surname: " << surname
         << ", ID: " << id << ", gender: " << gender
         << ", average grade: " << averageGrade(grades) << endl;
}
