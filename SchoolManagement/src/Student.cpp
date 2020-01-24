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
    cout << name << " " << surname << ": " << endl;
    for(int i=0; i<markVector.size(); i++){
        markVector[i]->print();
    }
}
void Student::addMark(Mark* mark){
    markVector.push_back(mark);
}
