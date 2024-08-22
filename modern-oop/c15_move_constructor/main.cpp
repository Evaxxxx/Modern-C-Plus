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
    Product p(std::move(Product(2)));
    p.print_object();

    cout << "-------------------------" << endl;
    return 0;
}