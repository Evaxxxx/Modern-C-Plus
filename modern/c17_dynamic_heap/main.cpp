#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // 在栈上应用指针 stack
    int number{50};
    int *sNumber = &number;
    // 不建议下面这种写法
    // int *pNumber;
    // *pNumber = &number;
    cout << number << ": " << *sNumber << endl;
    cout << &number << ": " << sNumber << endl;

    // 在堆上应用指针 heap
    int *pNumber{nullptr};
    // 这个地址是固定的 可以将这个地址的值设置为一个数
    pNumber = new int;
    *pNumber = 20;
    cout << "*pNumber: " << *pNumber << endl;

    delete pNumber;
    pNumber = nullptr;

    cout << "-------------------------" << endl;
    return 0;
}