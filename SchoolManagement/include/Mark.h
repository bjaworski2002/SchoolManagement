#ifndef MARK_H
#define MARK_H
#include <string>
#include "Student.h"
using namespace std;

class Mark
{
    public:
        Mark(int value, string subject, Student* student);
        virtual ~Mark();
        void print();

    protected:

    private:
        int value;
        string subject;
        Student* student;
};

#endif // MARK_H
