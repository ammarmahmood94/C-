
#include <iostream>
#include "/Users/ammarmahmood/C-/C-/Project2/Headers/person.h"

namespace Person
{
    
    Person::Person()
    {
        std::cout << "Please redeclare a person with a name and an age." << '\n';
    }

    Person::~Person()
    {
        std::cout << "Garbage Collector invoked" <<'\n';
    }

    Person::Person(const std::string& argname, int argage) : name{argname}, age {argage} 
    {}

    Person::Person(Person&& rhs) : name{std::move(rhs.name)}, age{std::move(rhs.age)} 
    {} 

    Person& Person::operator=(Person&& rhs)
    {
        name = std::move(rhs.name);
        age = std::move(rhs.age);
        return *this;
    }
    
    void Person::printnameandage()
    {
        std::cout << "My name is : " << name << " and I am " << age << " years old." << '\n';
    }

    std::string Person::getname()
    {
        return name;
    }

    int Person::getage()
    {
        return age;
    }

}






