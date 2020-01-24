#include <iostream>
#include "Student.h"
#include "Mark.h"

using namespace std;

int main()
{
    Student adam;
    Mark excellent(6, "fizyka");
    Mark good(4, "matematyka");
    excellent.print();
    good.print();
    cout << "Hello world!" << endl;
    return 0;
}
