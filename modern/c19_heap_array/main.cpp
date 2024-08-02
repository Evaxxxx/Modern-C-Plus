#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    double *pArray{new double[10]{1, 2.1}};
    if (pArray != nullptr)
    {
        for (size_t i = 0; i < 10; i++)
        {
            cout << "index: " << i << " value: " << pArray[i] << endl;
        }
        
    }

    double arr[13]{123, 34, 2};
    cout << "arr sizeof : " << sizeof(arr) / sizeof(arr[0]) << "\np array sizeof: " << sizeof(pArray) / sizeof(pArray[0]) << endl;
    // C++ 11
    cout << "arr size: " << size(arr) << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }

    delete[] pArray;
    pArray = nullptr;
    
    cout << endl;
    cout << "-------------------------" << endl;
    return 0;
}