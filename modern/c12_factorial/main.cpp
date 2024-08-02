#include <iostream>

using namespace std;

int factorial(int);

// C++ 20
int main(int argc, char *argv[])
{
    int number{0};
    cin >> number; // 实参

    cout << factorial(number) << endl;

    cout << "-------------------------" << endl;
    return 0;
}

int factorial(int number)
{
    int result = 1;
    for (size_t i = 1; i <= number; i++)
    {
        result = result * i;
    }
    return result;
}