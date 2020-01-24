#include "Mark.h"
#include <string>
#include <iostream>
using namespace std;

Mark::Mark(int value, string subject, Student* student)
{
    this->value=value;
    this->subject=subject;
    this->student=student;
}

Mark::~Mark()
{
    //dtor
}
void Mark::print(){
    cout << value << " - " << subject << endl;
//    student->print();
}
