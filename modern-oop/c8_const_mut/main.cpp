#include <iostream>
#include "cat.h"

using namespace std;

void function_take_cat(Cat cat)
{
    cat.set_name("good cat");
    cat.print_object();
}

void function_take_cat_const(const Cat cat)
{
    // cat.set_name(""); // 报错
    cat.print_object();
}

void function_take_cat_point(Cat *cat)
{
    cat->set_name("good cat");
    cat->print_object();
}

void function_take_cat_point_const(const Cat *cat)
{
    cat->print_object();
}

void function_take_cat_ref(Cat &cat)
{
    cat.set_name("good cat");
    cat.print_object();
}

void function_take_cat_ref_const(const Cat &cat)
{
    cat.print_object();
}


// C++ 20
int main(int argc, char *argv[])
{
    // 值类型
    const Cat cat("cat1", 2);
    // 值不可变可以传入可变参数函数
    function_take_cat(cat);
    function_take_cat_const(cat);

    // 指针类型
    const Cat *cat_point{&cat};
    // 指针类型不可以传入可变参数函数
    // function_take_cat_point(cat_point);
    function_take_cat_point_const(cat_point);

    // 引用类型
    const Cat &cat_ref{cat};
    // function_take_cat_ref(cat_ref);
    function_take_cat_ref_const(cat_ref);
    
    cout << "-------------------------" << endl;
    return 0;
}