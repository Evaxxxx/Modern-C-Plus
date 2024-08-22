#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
class Cat
{
private:
    std::string name;
    int age;
public:
    Cat(std::string name, int age);
    // getter
    std::string get_name() const;
    int get_age() const;

    // setter
    void set_name(std::string name);
    void set_age(int age);

    // print
    void print_object() const;
};

#endif