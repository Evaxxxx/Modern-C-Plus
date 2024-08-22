#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

class Product
{
private:
    std::string name{};
    std::string category{};
    int *years{};

public:
    Product() = default;
    Product(const std::string &name, const std::string &category, int years);
    Product(const std::string &name, const std::string &category);
    explicit Product(const std::string &name);  // 关闭隐式转换

    // copy Product(const Product p) 没加引用会出现问题
    Product(const Product &p);

    ~Product();

    // getter
    const std::string &get_name() const { return this->name; }
    const std::string &get_category() const { return this->category; }
    int *get_years() const { return this->years; }

    // setter
    void set_name(const std::string &name) { this->name = name; }
    void set_category(const std::string &category) { this->category = category; }
    void set_years(int years) { *(this->years) = years; }

    void print_object()
    {
        std::cout << "Product" << this
                  << " name: " << this->name
                  << " category: " << this->category
                  << ", years: " << *(this->years)
                  << ", years address: " << this->years << std::endl;
    }
};

#endif