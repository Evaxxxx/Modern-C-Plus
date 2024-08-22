#include <iostream>
#include "cat.h"

using namespace std;

void cat_info(const Cat &c)
{
    cout << "Cat name: " << c.m_name << ", age: " << c.m_age << endl;
}


// C++ 20
int main(int argc, char *argv[])
{
    Cat c1("mimi", 6);
    cat_info(c1);
    cout << "-------------------------" << endl;
    return 0;
}