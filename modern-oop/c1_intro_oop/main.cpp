#include <iostream>

using namespace std;

class Vector2
{
protected:
    int x;
    int y;

public:
    // 构造函数
    Vector2(int x, int y) : x(x), y(y)
    {
        cout << "Construct Vector2" << endl;
    }
    virtual ~Vector2() { cout << "virtual destruct" << endl; }
    virtual void print() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class Vector3 : public Vector2
{
private:
    int z;

public:
    Vector3(int x, int y, int z) : Vector2(x, y), z(z)
    {
        cout << "Constructor Vector3" << endl;
    }
    void print() const
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl; 
    }
};

// C++ 20
int main(int argc, char *argv[])
{
    Vector2 ex2(1, 3);
    Vector3 ex3(2, 3, 4);
    ex3.print();
    cout << "-------------------------" << endl;

    Vector2 *demo2d = new Vector2(1, 2);
    delete demo2d;
    demo2d = nullptr;

    Vector3 *demo3d = new Vector3(3, 2, 3);
    demo3d -> print();
    delete demo3d;
    demo3d = nullptr;

    cout << "-------------------------" << endl;
    return 0;
}