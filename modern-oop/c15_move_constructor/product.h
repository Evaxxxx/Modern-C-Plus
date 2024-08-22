#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

class Product
{
private:
    int *years{};

public:
    Product(int i);
    Product(const Product &p);
    Product(Product &&p);

    ~Product();

    // getter
    int *get_years() const { return this->years; }

    // setter
    void set_years(int years) { *(this->years) = years; }

    // move years
    int *move_years()
    {
        int *new_years{years};
        years = nullptr;
        return new_years;
    }

    void print_object()
    {
        std::cout << "Product: " << this
                  << ", years: " << *(this->years)
                  << ", years address: " << this->years << std::endl;
    }
};

#endif