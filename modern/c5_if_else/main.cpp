#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    int score{0};
    cin >> score;
    if (score >= 90)
    {
        cout << "A" << endl;
    } else if (score >= 80)
    {
        cout << "B" << endl;
    } else if (score >= 60)
    {
        cout << "C" << endl;
    } else
    {
        cout << "Retake the subject" << endl;
    }
    
    cout << "-------------------------" << endl;
}