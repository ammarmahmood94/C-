#ifndef PERSON_H
#define PERSON_H
#include <string>
#include<iostream>

class Person
{
private:
    std::string name;
    int age;
public:
    Person();
    ~Person();
    
    Person (std::string argname, int age);
    Person (const Person& rhs);
    Person& operator=(const Person& rhs);
    Person(Person&& rhs);
    Person& operator=(Person&& rhs);

    virtual void printnameandage();
    virtual void setter();
    
    template<typename T>
    T getter(T t);
};


#endif