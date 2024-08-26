#ifndef PERSON_H
#define PERSON_H
#include <iostream>
class Person
{
public:
    Person() = default;
    void cat_info(const Cat &c) const
    {
        std::cout << "Cat name : " << c.m_name << ", age : " << c.m_age << std::endl;
    }
};

#endif