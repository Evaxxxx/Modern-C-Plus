#include <iostream>

using namespace std;

int factorial(int);

// C++ 20
int main(int argc, char *argv[])
{
    int count{0};
    cin >> count;
    cout << "Factorial " << count << " : " << factorial(count) << endl;
    cout << "-------------------------" << endl;
    return 0;
}

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    } else
    {
        int result = number * factorial(number - 1);
        // 1*2*3*4*5 并不是 5*4*3*2*1
        return result;
    }
    
}