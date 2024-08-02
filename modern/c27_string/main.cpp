#include <iostream>
#include <string>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // 字符串拼接 +
    string h{"hello"};
    string y{"yz"};
    string hello{h + " " + y};
    cout << hello << endl;
    // append
    string hello2{y.append("yzzy", 2, 2)};
    cout << y << endl;
    // size
    cout << hello2.size() << endl;
    cout << hello2.capacity() << endl;

    for (auto i : hello2)
    {
        cout << i << " ";
    }
    cout << endl;
    for (size_t i = 0; i < hello2.size(); i++)
    {
        cout << hello2.at(i) << " ";
    }
    cout << endl;
    cout << hello2.front() << endl;
    cout << hello2.back() << endl;

    if (hello2.find("z") != string::npos)
    {
        cout << "get position " << hello2.find("z") << endl;
    }


    cout << "-------------------------" << endl;
    return 0;
}