#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <string_view>
#include <iostream>

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &Person);

public:
    Person()
    {
        ++m_count;
    };
    // std::string_view 是 C++17 引入的一种轻量级的字符串视图类型，主要用于提供对字符串数据的只读视图
    // 使用 std::string_view 可以避免不必要的字符串复制，同时允许高效地传递和操作字符串数据
    Person(std::string_view fullname, int age, std::string_view address);
    Person(const Person &source);
    ~Person();
    void do_something() const;

    // Getter
    std::string get_name() const
    {
        return m_name;
    }
    int get_age() const
    {
        return m_age;
    }
    std::string get_address() const
    {
        return m_address;
    }

    // 属性
public:
    std::string m_name{"None"};
    static int m_count;

protected:
    int m_age{0};

private:
    std::string m_address{"None"};

};

#endif