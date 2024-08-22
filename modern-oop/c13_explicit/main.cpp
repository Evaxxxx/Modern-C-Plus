#include <iostream>
#include "product.h"

using namespace std;

bool compare(const Product &product1, const Product &product2)
{
    cout << *(product1.get_years()) << " : " << *(product2.get_years()) << endl;
    return (*(product1.get_years()) > *(product2.get_years())) ? true : false;
}

// C++ 20
int main(int argc, char *argv[])
{
    Product p1("Box", "Toy", 2);
    Product p2("xx");
    std::string s1{"dd"};
    // cout << compare(p1, s1) << endl;
    cout << compare(p1, p2) << endl;

    cout << "-------------------------" << endl;
    return 0;
}