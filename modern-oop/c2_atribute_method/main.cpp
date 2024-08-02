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
    Circle(double param_radius)
    {
        // 实例加1
        number++;
        radius = param_radius;
    }
    ~Circle()
    {
        number--;
        cout << "destructor" << endl;
    }
    double area()
    {
        return PI * radius * radius;
    }
};

// 初始化类属性
int Circle::number = 0;

// C++ 20
int main(int argc, char *argv[])
{
    // 栈上的对象
    Circle circle(2);
    cout << "area: " << circle.area() << endl;
    cout << "number: " << Circle::number << endl;
    cout << "-------------------------" << endl;

    // 堆上 需要自己删除
    Circle *c = new Circle(3);
    cout << "area: " << c->area() << endl;
    cout << "number: " << Circle::number << endl;
    delete c;
    c = nullptr;
    cout << "delete c, number: " << Circle::number << endl;

    cout << "-------------------------" << endl;
    return 0;
}