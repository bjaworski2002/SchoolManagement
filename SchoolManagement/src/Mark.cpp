#include "Mark.h"
#include <string>
#include <iostream>
using namespace std;

Mark::Mark(int value, string subject)
{
    this->value=value;
    this->subject=subject;
}

Mark::~Mark()
{
    //dtor
}
void Mark::print(){
    cout << value << " - " << subject << endl;
}
