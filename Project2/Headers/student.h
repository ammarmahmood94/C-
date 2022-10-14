#ifndef MY_STUDENT_H
#define MY_STUDENT_H
#include "person.h"


namespace Person::Student
{
    class Student : public Person
    {
    private:
        bool amStudent;
        std::string subject;
    public:
        Student();
        ~Student() override;

        Student(const std::string& argname, int argage, bool argStudent, const std::string& argsubject);
        Student(Student&& rhs);
        Student& operator=(Student&& rhs);  
        
        void printnameandage() override;
        std::string getname() override;
        int getage() override;
        bool checkStudent();
        std::string whichsubject();
    };
}





#endif