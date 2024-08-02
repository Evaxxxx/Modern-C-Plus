#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // a+b a-b a*b a/b
    int a{0}, b{0};
    char op{' '};
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Sorry I can't understand!" << endl;
        break;
    }

    cout << "-------------------------" << endl;
    return 0;
}