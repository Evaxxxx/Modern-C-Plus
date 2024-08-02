#include <iostream>
#include "constant.h"
#include "circle.h"
using namespace std;

// C++ 20
int main(int argc, char *argv[])
{
    // 堆上 需要自己删除
    Circle *c = new Circle(3);
    c->print_object();
    c->print_radius_pointer()->set_radius_pointer(4)->print_radius_pointer();
    cout << "-------------------------" << endl;
    c->print_radius_ref().set_radius_ref(4).print_radius_ref();
    cout << "-------------------------" << endl;
    delete c;
    c = nullptr;
    cout << "-------------------------" << endl;

    // 栈上的对象
    Circle circle(2);
    circle.print_object();
    circle.print_radius_pointer()->set_radius_pointer(4)->print_radius_pointer();
    cout << "-------------------------" << endl;
    circle.print_radius_ref().set_radius_ref(4).print_radius_ref();

    cout << "-------------------------" << endl;
    return 0;
}