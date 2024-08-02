#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    cout << sizeof(int *) << endl;
    cout << sizeof(double *) << endl;

    // 指针的初始化

    // 指向栈
    // 错误的写法 int *pNumber{nullptr}
    int n{12};
    // int *sNumber = &n;
    int *sNumber{&n};
    cout << *sNumber << endl;

    // 指向堆
    int *hNumber{new int{13}};
    delete hNumber;     // 只是放弃控制
    hNumber = nullptr;  // 清空

    if (hNumber != nullptr)
    {
        cout << *hNumber << endl;
    }

    int *pNumber{new int{10}};  // 如果没清空，则造成内存泄露
    delete pNumber;
    pNumber = nullptr;

    pNumber = new int{17};
    delete pNumber;
    pNumber = nullptr;

    {
        int *scopeNumber{new int{45}};
    }   // 在 scope 后泄露45
    

    cout << "-------------------------" << endl;
    return 0;
}