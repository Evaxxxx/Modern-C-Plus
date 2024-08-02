#include <iostream>

using namespace std;

// C++ 20
int main()
{
    int x{0};
    cout << "int x{0}: " << sizeof(x) << endl;
    
    cout << "Integer: " << sizeof(int) << endl;
    cout << "Char: " << sizeof(char) << endl;
    cout << "Bool: " << sizeof(bool) << endl;
    cout << "Long: " << sizeof(int) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;
    cout << "Long Long: " << sizeof(long long) << endl;
    cout << "Long Double: " << sizeof(long double) << endl;
    cout << "Unsigned Long: " << sizeof(unsigned long) << endl;
    cout << "Size_t: " << sizeof(size_t) << endl;

    cout << "Bool*: " << sizeof(bool*) << endl;
    cout << "Float*: " << sizeof(float*) << endl;
    cout << "Double*: " << sizeof(double*) << endl;
    cout << "Long*: " << sizeof(long*) << endl;

    auto value1{12};
    auto value2{3.14};
    cout << "Int: " << sizeof(value1) << endl;
    cout << "Double: " << sizeof(value2) << endl;

    auto value3{1.2f};
    auto value4{22ll};
    auto value5{33ul};
    auto value6{77l};
    cout << "Float: " << sizeof(value3) << endl;
    cout << "Long Long: " << sizeof(value4) << endl;
    cout << "Unsigned Long: " << sizeof(value5) << endl;
    cout << "Long: " << sizeof(value6) << endl;
       

    cout << "Hello World" << endl;
}