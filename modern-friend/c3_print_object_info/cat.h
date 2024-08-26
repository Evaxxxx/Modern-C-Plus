#ifndef CAT_H
#define CAT_H
#include <string>

class Cat
{
    // 友元函数
    friend void cat_info(const Cat &c);
    // 定义了一个友元函数（friend），用于重载输出流操作符（<<），以便能够将 Cat 类的对象输出到标准输出流
    friend std::ostream &operator<<(std::ostream &out, const Cat &cat);
    // 友元类
    friend class Person;

public:
    Cat(const std::string &name, int age);

private:
    std::string m_name;
    int m_age;
};


#endif