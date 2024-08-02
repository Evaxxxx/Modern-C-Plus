#include <iostream>

using namespace std;

char encrypt(const char &param)
{
    return param - 13;
}

char decrypt(const char &param)
{
    return param + 13;
}

void change(string &stringItem, char (*callbackFunction)(const char &))
{
    for (size_t i = 0; i < stringItem.size(); i++)
    {
        stringItem[i] = callbackFunction(stringItem[i]);
    }
}


// C++ 20
int main(int argc, char *argv[])
{
    string msg{"yzzy"};
    // encrypt char - 13
    change(msg, encrypt);
    cout << "encrypt: " << msg << endl;

    // decrypt char + 13
    change(msg, decrypt);
    cout << "msg : " << msg << endl;

    cout << "-------------------------" << endl;
    return 0;
}