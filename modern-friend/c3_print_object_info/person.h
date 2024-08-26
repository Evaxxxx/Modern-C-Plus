#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "cat.h"

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &Person);

public:
    Person() = default;
    void cat_info(const Cat &c) const;
};

#endif