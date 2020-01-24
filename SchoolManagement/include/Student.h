#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include <vector>
#include "Mark.h"
using namespace std;

class Mark;
class Student
{
    public:
        Student(string name, string surname);
        virtual ~Student();
        void print();
        void addMark(Mark* mark);

    protected:

    private:
        string name;
        string surname;
        vector<Mark*> markVector;
};

#endif // STUDENT_H
