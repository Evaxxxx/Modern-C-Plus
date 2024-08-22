#include <iostream>

using namespace std;

class Person
{
public:
    std::string name{"yz"};
};

struct Cat
{
    std::string name{"mimi"};
};


// C++ 20
int main(int argc, char *argv[])
{
    Cat c;
    c.name = "mi";
    cout << c.name << endl;
    Person p;
    cout << p.name << endl;

    cout << "-------------------------" << endl;
    return 0;
}