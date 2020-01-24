#include <iostream>
#include "Student.h"
#include "Mark.h"

using namespace std;

int main()
{
    Student adam("Adam", "Kowalski");
    Mark excellent(6, "fizyka", &adam);
    Mark good(4, "matematyka", &adam);
    adam.addMark(&excellent);
    adam.addMark(&good);
    adam.addMark(new Mark(4, "geografia", &adam));
    adam.print();
    cout << "Hello world!" << endl;
    return 0;
}
