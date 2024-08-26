#include <iostream>
#include "cat.h"

Cat::Cat(const std::string &name, int age) : m_name(name), m_age(age) {}

std::ostream &operator<<(std::ostream &out, const Cat &cat)
{
    out << "Cat " << cat.m_name << " " << cat.m_age << std::endl;
    return out;
}
