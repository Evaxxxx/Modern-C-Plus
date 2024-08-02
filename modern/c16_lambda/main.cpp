#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
     auto func = []()
    {
        cout << "yz" << endl;
        cout << "-------------------------" << endl;
    };
    int a{10};
    auto func0 = [a]()
    {
        cout << "a: " << a << endl;
        cout << "-------------------------" << endl;
    };

    int b{20};

    auto func1 = [&b, a]()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        b++;
        cout << "-------------------------" << endl;
    };

    auto func2 = [=]()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "-------------------------" << endl;
    };

    auto func3 = [&]()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        a++;
        b++;
        cout << "-------------------------" << endl;
    };
    func();
    func0();
    func1();
    func2();
    func3();
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "-------------------------" << endl;
    return 0;
}