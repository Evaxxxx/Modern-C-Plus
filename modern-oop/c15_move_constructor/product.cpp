#include "product.h"

// 深拷贝
Product::Product(const Product &p) : years(new int(*p.get_years()))
{

}

Product::Product(Product &&p) : years(p.move_years())
{

}

Product::Product(int i) : years(new int(i))
{
    
}

Product::~Product()
{
    std::cout << "delete" << std::endl;
    delete years;
}