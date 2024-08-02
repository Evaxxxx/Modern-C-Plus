#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // isalnum是否为字母或数字
    cout << isalnum('A') << endl;
    cout << isalnum('e') << endl;
    cout << isalnum('1') << endl;
    cout << isalnum('^') << endl;
    cout << "-------------------------" << endl;

    // isalpha是否为字符
    cout << isalpha('A') << endl;
    cout << isalpha('e') << endl;
    cout << isalpha('1') << endl;
    cout << isalpha('^') << endl;
    cout << "-------------------------" << endl;

    // isdigit是否为数字
    cout << isdigit('A') << endl;
    cout << isdigit('e') << endl;
    cout << isdigit('1') << endl;
    cout << isdigit('^') << endl;

    // isblank是否为空格
    string msg{"Hello yzzy yz!"};
    int blankNum{0};
    for (auto i : msg)
    {
        if (isblank(i))
        {
            blankNum++;
        }
    }
    cout << blankNum << endl;
    cout << "-------------------------" << endl;

    // isupper是否为大写
    cout << isupper('a') << endl;
    cout << isupper('e') << endl;
    cout << isupper('L') << endl;
    cout << isupper('1') << endl;
    cout << "-------------------------" << endl;

    // islower是否为小写
    cout << islower('a') << endl;
    cout << islower('e') << endl;
    cout << islower('L') << endl;
    cout << islower('1') << endl;
    cout << "-------------------------" << endl;

    // 用引用进行修改
    for (auto &i : msg)
    {
        i = toupper(i);
    }
    cout << msg << endl;

    for (size_t i = 0; i < msg.size(); i++)
    {
        msg[i] = tolower(msg[i]);
    }
    cout << msg << endl;

    cout << "-------------------------" << endl;
    return 0;
}