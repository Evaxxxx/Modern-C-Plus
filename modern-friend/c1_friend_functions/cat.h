#ifndef CAT_H
#define CAT_H
#include <string>

class Cat
{
    // 右元函数
    friend void cat_info(const Cat &c);

public:
    Cat(const std::string &name, int age) : m_name(name), m_age(age){}

private:
    std::string m_name;
    int m_age;
};


#endif