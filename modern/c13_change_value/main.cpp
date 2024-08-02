#include <iostream>

using namespace std;

int addAge(int);
void addAgePoint(int &);

// C++ 20
int main(int argc, char *argv[])
{
    int age{45};
    int newAge{addAge(45)};
    cout << "age: " << age << endl;
    cout << "&age: " << &age << endl;
    
    addAgePoint(age);
    cout << "addAgePoint(age): " << age << endl;
    cout << "-------------------------" << endl;
    return 0;
}

int addAge(int age)
{
    int result{age + 1};
    return result;
}

void addAgePoint(int &age)
{
    ++age;
    cout << "age: " << age << "  &age: " << &age << endl;
}