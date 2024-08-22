#include <iostream>
#include "cat.h"

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    const Cat immut_cat("cat1", 3);
    cout << immut_cat.name() << endl;
    // immut_cat.name() ="xx";
    immut_cat.print_object();

    Cat mut_cat("cat2", 4);
    mut_cat.name() = "mimi";
    mut_cat.age() += 1;
    mut_cat.print_object();
    
    cout << "-------------------------" << endl;
    return 0;
}