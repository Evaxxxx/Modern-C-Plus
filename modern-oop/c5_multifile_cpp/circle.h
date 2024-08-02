#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "constant.h"
class Circle
{
private:
    double radius{0};

public:
    static int number;
    // constructor
    Circle()
    {
        // 实例加1
        number++;
        radius = 1.0;
        std::cout << "constructor default" << std::endl;
    }

    Circle(double radius)
    {
        // 实例加1
        number++;
        // radius = param_radius; 改为 this 指针调用
        this->radius = radius;
    }

    ~Circle()
    {
        number--;
        std::cout << "destructor" << std::endl;
    }

    // getter
    double get_radius()
    {
        return radius;
    }

    // setter
    void set_radius(double radius)
    {
        this->radius = radius;
    }

    // 面积
    double area()
    {
        return PI * radius * radius;
    }

    // 打印 对象地址
    void print_object();

    // 指针 object->a()->b()
    Circle *set_radius_pointer(double radius);
    Circle *print_radius_pointer();

    // 引用 object.a().b().c()
    Circle &set_radius_ref(double radius);
    Circle &print_radius_ref();
};


#endif