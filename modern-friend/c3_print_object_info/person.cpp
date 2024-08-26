#include "person.h"

void Person::cat_info(const Cat &c) const
{
    std::cout << "Cat name : " << c.m_name << ", age : " << c.m_age << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person address: " << &person << std::endl;
    return out;
}