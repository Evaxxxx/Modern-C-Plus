#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    for (size_t i{0}; i <= 10; ++i)
    {
        cout << i << " ";
    }
    cout << endl;
    // 数组与for
    int arr1[]{1, 2, 3, 4};
    // 数组的长度
    int arrSize{sizeof(arr1) / sizeof(arr1[0])};
    cout << "size: " << arrSize << endl;

    for (size_t i{0}; i < arrSize; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // auto
    for (auto x : arr1)
    {
        cout << x << " " ;
    }
    cout << endl;    

    for (size_t i{0}; i <= 20; ++i)
    {
        if ((i % 2) != 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << "-------------------------" << endl;
    return 0;
}