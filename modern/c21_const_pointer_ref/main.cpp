#include <iostream>

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    /*
    // const与指针
    double n{1.7};
    const double *p{&n};
    double m{1.5};
    cout << "p address: " << p << endl;
    p = &n;
    cout << "p address: " << p << endl;

    cout << "-------------------------" << endl;
    return 0;
    */
    double n{1.4};
    double *const p{&n};
    double m{1.5};
    cout << "p address: " << p << endl;
    // p = &m;
    *p = m;
    cout << "p address: " << p << endl;
    cout << "p " << *p << endl;

    const double *const const_p{&n};
    // *const_p = m;
    // const_p = &m;
    double q{1.8};
    double &ref_n{n};
    ref_n = q;
    cout << n << " : " << &n << " : " << ref_n << endl;




}