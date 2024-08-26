#include <iostream>
#include "person.h"
#include "worker.h"

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    Worker w1("G", "Address", "F", 45);
    cout << w1 << endl;

    Worker w2(w1);
    cout << w2 << endl;


    cout << "-------------------------" << endl;
    
    return 0;
}