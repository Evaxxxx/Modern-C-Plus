#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // 引用与指针的不同
    double value{13.13};
    double &refValue{value};
    double *pValue{&value};
    // 读取
    cout << pValue << endl;
    cout << "value : " << value << "    "
         << "pointer : " << *pValue << "     "
         << "ref : " << refValue << endl;
    // 修改 value
    *pValue = 13.15;
    cout << "value : " << value << "    "
         << "pointer : " << *pValue << "     "
         << "ref : " << refValue << endl;

    refValue = 13.13;
    cout << "value : " << value << "    "
         << "pointer : " << *pValue << "     "
         << "ref : " << refValue << endl;

    // 引用可以变成其他值的引用吗
    cout << "value address : " << &value << " : " << pValue << endl;
    double otherValue = 1.3;
    refValue = otherValue;
    cout << "value : " << value << "    "
         << "pointer : " << *pValue << "     "
         << "ref : " << refValue << "    "
         << "pointer address : " << pValue << endl;

    double otherValue0 = 1.7;
    *pValue = otherValue0;
    cout << "value : " << value << "    "
         << "pointer : " << *pValue << "     "
         << "ref : " << refValue << "    "
         << "pointer address : " << pValue << endl;
    // 将指针指向不同的值
    double otherValue1 = 1.8;
    pValue = &otherValue1;
    cout << "otherValue1 address : " << &otherValue1 << endl;
    cout << "value : " << value << "    "
         << "value address : " << &value << "   "
         << "pointer : " << *pValue << "     "
         << "ref : " << refValue << "    "
         << "pointer address : " << pValue << endl;

    cout << "-------------------------" << endl;
    return 0;
}