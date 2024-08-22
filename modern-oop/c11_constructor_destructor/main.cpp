#include <iostream>
#include "product.h"

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
     {
        Product p1("Box", "Toy", 18);
        p1.print_object();
    }
    cout << "-------------------------" << endl;

    {
        Product p2("Box", "Toy");
        p2.print_object();
    }
    cout << "-------------------------" << endl;
    {
        Product p3("Box");
        p3.print_object();
    }
    cout << "-------------------------" << endl;
    return 0;
}