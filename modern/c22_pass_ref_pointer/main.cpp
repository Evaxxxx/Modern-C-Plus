#include <iostream>

using namespace std;
void addTwo(int *const);
void addThree(int &);

// C++ 20
int main(int argc, char *argv[])
{
    int number{13};
    cout << "number: " << number << " &number : " << &number << endl;
    addTwo(&number);
    cout << "number: " << number << " &number : " << &number << endl;

    cout << "number: " << number << " &number : " << &number << endl;
    addThree(number);
    cout << "number: " << number << " &number : " << &number << endl;

    cout << "-------------------------" << endl;
    return 0;
}

void addTwo(int *const number)
{
    *number += 2;
}

void addThree(int &number)
{
    number += 3;
}
