#include "circle.h"

// 初始化类属性
int Circle::number = 0;

// 打印 对象地址
void Circle::print_object()
{
    std::cout << "object address: " << this << std::endl;
    std::cout << "radius: " << this->get_radius() << std::endl;
}

// 指针 object->a()->b()
Circle *Circle::set_radius_pointer(double radius)
{
    std::cout << "set pointer" << std::endl;
    this->radius = radius;
    return this;
}

Circle *Circle::print_radius_pointer()
{
    std::cout << "print: " << this->get_radius() << std::endl;
    return this;
}

// 引用 object.a().b().c()
Circle &Circle::set_radius_ref(double radius)
{
    std::cout << "set ref" << std::endl;
    this->radius = radius;
    return *this;   // *this 实例
}

Circle &Circle::print_radius_ref()
{
    std::cout << "print: " << this->get_radius() << std::endl;
    return *this;
}