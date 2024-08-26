#include "person.h"

// 花括号初始化是 C++11 引入的列表初始化（或称为聚合初始化）的形式
// 使用花括号初始化的一个重要优点是，它对类型不匹配或丢失信息的情况提供了更严格的检查，避免了一些隐式转换带来的潜在问题
Person::Person(std::string_view name, int age, std::string_view address) : m_name(name), m_age{age}, m_address{address} 
{
    std::cout << "Person Constructor" << std::endl;
}

void Person::do_something() const
{
    std::cout << "Some" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person name : " << person.get_name() << ", Age: " << person.get_age() << ", Address: " << person.get_address() << std::endl;
    return out;
}

// 拷贝构造函数
Person::Person(const Person &source) : m_name(source.m_name), m_age(source.m_age), m_address(source.m_address)
{
    std::cout << "Person copy Constructor" << std::endl;
}

Person::~Person() 
{
    std::cout << "Person Deconstructor" << std::endl;
}
