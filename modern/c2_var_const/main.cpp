#include <iostream>
#include <string>

using namespace std;

// const 与 define
#define COMMA 44 // 44是什么不需要关心

// 全局 一般不要用
int RandNum{0};
const double NA{6.02e23};


// C++ 20
int main()
{   
    cout << "RandNum: " << RandNum << endl;
    RandNum = 3;
    cout << "RandNum: " << RandNum << endl;

    const int age = 45;
    const int oldWeight{80};

    float nowWeight{oldWeight + 30};
    cout << "age: " << age << endl;
    cout << "weight: " << nowWeight << endl;

    float COMMA_int{COMMA};
    string COMMA_string{COMMA};

    cout << "COMMA int: " << COMMA_int + 2 << endl;
    cout << "COMMA string, 44 ASCII: " << COMMA_string << endl;
    


    cout << "Hello World" << endl;
}