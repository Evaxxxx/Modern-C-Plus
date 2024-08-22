#include "product.h"

Product::Product(const std::string &name, const std::string &category, int years) : name(name), category(category), years(new int(years))
{
    std::cout << "three" << std::endl;
}

Product::Product(const std::string &name, const std::string &category) : Product(name, category, 0)
{
    std::cout << "two" << std::endl;
}

Product::Product(const std::string &name) : Product(name, "")
{
    std::cout << "one" << std::endl;
}

// 浅拷贝 地址一样
// Product::Product(const Product &p) : name(p.get_name()), category(p.get_category()), years(p.get_years())
// {

// }

// 深拷贝
Product::Product(const Product &p) : name(p.get_name()), category(p.get_category()), years(new int(*p.get_years()))
{

}

Product::~Product()
{
    std::cout << "delete" << std::endl;
    delete years;
}