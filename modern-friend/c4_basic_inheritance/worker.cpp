#include "person.h"
#include "worker.h"

Worker::Worker(std::string_view job) : m_job(job) {}

Worker::Worker(std::string_view job, int age) : m_job(job)
{
    m_age = age;
    // m_address = "dd"; 私有不会被继承
}

std::ostream &operator<<(std::ostream &out, const Worker &worker)
{
    out << "Worker name : " << worker.get_name() << ", Age: " << worker.get_age() << ", Job: " << worker.get_job() << ", Address: " << worker.get_address()
        << std::endl;
    return out;
}
