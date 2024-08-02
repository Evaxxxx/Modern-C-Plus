#include <iostream>

using namespace std;

const double PI{3.14};

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
        cout << "constructor default" << endl;
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
        cout << "destructor" << endl;
    }

    // 面积
    double area()
    {
        return PI * radius * radius;
    }

    // 打印 对象地址
    void print_object()
    {
        cout << "object address: " << this << endl;
        cout << "radius: " << this->radius << endl;
    }

    // 指针 object->a()->b()
    Circle *set_radius_pointer(double radius)
    {
        cout << "set pointer" << endl;
        this->radius = radius;
        return this;
    }

    Circle *print_radius_pointer()
    {
        cout << "print: " << this->radius << endl;
        return this;
    }

    // 引用 object.a().b().c()
    Circle &set_radius_ref(double radius)
    {
        cout << "set ref" << endl;
        this->radius = radius;
        return *this;   // *this 实例
    }
    
    Circle &print_radius_ref()
    {
        cout << "print: " << this->radius << endl;
        return *this;
    }

};

// 初始化类属性
int Circle::number = 0;

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