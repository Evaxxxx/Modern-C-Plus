#include "person.h"
#include "worker.h"

int Worker::m_count{0};

Worker::Worker(std::string_view job) : m_job(job) 
{
    ++m_count;
}

Worker::Worker(std::string_view job, int age) : m_job(job)
{
    ++m_count;
    m_age = age;
    // m_address = "dd"; 私有不会被继承
}

// 在子类构造函数中调用父类构造函数来创建对象
Worker::Worker(std::string_view name, std::string_view address, std::string_view job, int age) : Person(name, age, address), m_job(job)
{
    ++m_count;
    std::cout << "Worker Constructor" << std::endl;
}

// 在子类中调用父类的拷贝构造函数
Worker::Worker(const Worker &source) : Person(source), m_job(source.m_job)
{
    ++m_count;
    std::cout << "Worker copy Constructor" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Worker &worker)
{
    out << "Worker name : " << worker.get_name() << ", Age: " << worker.get_age() << ", Job: " << worker.get_job() << ", Address: " << worker.get_address()
        << std::endl;
    return out;
}

Worker::~Worker()
{
    --m_count;
    std::cout << "Worker Deconstructor" << std::endl;
}

