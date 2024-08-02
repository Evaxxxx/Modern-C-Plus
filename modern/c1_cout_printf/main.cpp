#include <iostream>

using namespace std;

// C++ 20
/*
    1.推荐使用 cout 和 cin 来进行输出和输入
    2.cout 实际上是调用了成员运算符函数 operator<<
    3.endl 是一个操作符，并不只是执行了换行操作，还对输出的缓冲区进行刷新
*/
int main(int argc, char *argv[])
{
    int num1, num2;
    cout << "Enter num 1 : ";
    cin >> num1;
    cout << "Enter num 2 : ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    if (argc != 1)
    {
        cout << "You input " << argc << " argument" << endl;
        for (size_t i = 0; i < argc; i++)
        {
            cout << "arg: " << i << " : " << argv[i] << endl;
        }
        
    }
    

    
    cout << "Hello World" << endl;
}