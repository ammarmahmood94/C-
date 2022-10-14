#ifndef PERSON_H
#define PERSON_H
#include <string>

namespace Person
{
    class Person
    {
    private:
        std::string name;
        int age;
    public:
        Person();
        virtual ~Person();

        Person (const std::string& argname, int argage);
        Person (const Person& rhs) = delete;
        Person& operator=(const Person& rhs) = delete;
        Person(Person&& rhs);
        Person& operator=(Person&& rhs);

        virtual void printnameandage();
        virtual std::string getname();
        virtual int getage();
    };
}

#endif