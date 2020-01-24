#include <iostream>
#include "Student.h"
#include "Mark.h"

using namespace std;

int main()
{
    Student adam;
    Mark excellent(6, "fizyka", &adam);
    Mark good(4, "matematyka", &adam);
    excellent.print();
    good.print();
    adam.print();
    cout << "Hello world!" << endl;
    return 0;
}
