#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string name, string surname)
{
    this->name=name;
    this->surname=surname;
}

Student::~Student()
{
    //dtor
}
void Student::print(){
    cout << name << " " << surname << endl;
}
