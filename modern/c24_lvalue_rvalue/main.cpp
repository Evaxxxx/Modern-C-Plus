#include <iostream>

using namespace std;

// 右值
int add(int a, int b)
{
    return a + b;
}


// C++ 20
int main(int argc, char *argv[])
{
    int a0{1};
    int a1{2};
    int a2{3};
    // 都是左值
    cout << &a0 << endl;
    cout << &a1 << endl;
    cout << &a2 << endl;

    int *p{&a0};
    cout << *p << endl;

    int x{0};
    x = (a1 + a2); // (a1+a2) 地址不能获取 copy
    // int *p = &(a1 + a2);
    int &&result1 = a0 + a1; // 不是值copy
    cout << result1 << endl;
    x = add(a1, a2); // copy
    int &&result2 = add(a1, a2);
    cout << result2 << endl;


    cout << "-------------------------" << endl;
    return 0;
}