#include <iostream>
#include "cat.h"

using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // const object

    // 值
    const Cat cat("moon", 3);
    // const object 只能调用 const method
    cout << cat.get_name() << endl;
    cout << cat.get_age() << endl;
    cat.print_object();

    // 指针
    const Cat *cat_pointer(&cat);
    cout << cat_pointer->get_name() << endl;
    cout << cat_pointer->get_age() << endl;
    cat_pointer->print_object();

    // 引用
    const Cat &cat_ref{cat};
    cout << cat_ref.get_name() << endl;
    cout << cat_ref.get_age() << endl;
    cat_ref.print_object();
    
    cout << "-------------------------" << endl;
    return 0;
}