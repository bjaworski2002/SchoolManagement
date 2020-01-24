#ifndef MARK_H
#define MARK_H
#include <string>
using namespace std;

class Mark
{
    public:
        Mark(int value, string subject);
        virtual ~Mark();
        void print();

    protected:

    private:
        int value;
        string subject;
//        Student* student;
};

#endif // MARK_H
