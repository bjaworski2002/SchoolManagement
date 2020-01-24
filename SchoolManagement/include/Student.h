#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
using namespace std;
class Student
{
    public:
        Student(string name, string surname);
        virtual ~Student();
        void print();

    protected:

    private:
        string name;
        string surname;
};

#endif // STUDENT_H
