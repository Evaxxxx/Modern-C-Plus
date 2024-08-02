#include <iostream>

using namespace std;

// C++ 20
int main()
{
    int a{5};
    int b{3};

    // and
    int aAndb = a & b;
    cout << "a & b: " << aAndb << endl;
    // or
    int aOrb = a | b;
    cout << "a | b: " << aOrb << endl;
    // xor
    int aXorb = a ^ b;
    cout << "a ^ b: " << aXorb << endl;
    // ~
    int x1{0};
    int x2{1};
    cout << "~0: " << ~x1 << endl;
    cout << "~1: " << ~x2 << endl;

    // 左移 <<
    int left = {a << b};     // 乘8
    int right = {a >> b};    // 除8
    cout << "left: " << left << endl;
    cout << "right: " << right << endl;

    cout << "Hello World" << endl;
}