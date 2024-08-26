#include <iostream>
#include "person.h"
#include "worker.h"

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    Worker w1("F", 45);
    w1.m_name = "Hello";
    // w1.m_age = 1;
    // w1.m_address = "dd";

    cout << w1 << endl;
    w1.do_something();

    cout << "-------------------------" << endl;
    
    return 0;
}