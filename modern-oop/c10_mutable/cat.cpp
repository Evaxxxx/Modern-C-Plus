#include "cat.h"
#include <string>

Cat::Cat(std::string name, int age)
{
    this->m_name = name;
    this->m_age = age;
}

void Cat::print_object() const
{
    this->print_count++;
    std::cout << "Cat (" << this << ") : name : " << this->m_name << " age: " << this->m_age << std::endl;
    std::cout << "Address : " << this << ": print count: " << this->print_count << std::endl;
}
