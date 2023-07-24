#ifndef  Student_h
#define Student_h

#include <string>
#include "User.hpp"

class Student : public User {
    private:
    std::string Class;
    int Courses_Taken;
    public:
    virtual ~Student(){}

    Student(int id, std::string _Name, std::string _Nationality, int _Age, std::string _Class, int _Courses_Taken) : // function to create a student entity
    User (id, _Name, _Nationality, _Age){
        Class = _Class;
        Courses_Taken = _Courses_Taken;
    }                                                                                           
    void setClass(std::string _Class){       //creating relevant data setters and getters to update user information
        Class = _Class;
    }
    std::string getClass(){
        return Class;
    }
    void setCourses_Taken(int _Courses_Taken){
        Courses_Taken = _Courses_Taken;
    }
    int getCourses_Taken(){
        return Courses_Taken;
    }
    void printInfo() override{
        User::printInfo();
        std::cout << "Class: " << Class << std::endl;
        std::cout << "Courses Taken: " << Courses_Taken << std::endl;
        std::cout << "........." << std::endl;
    }

};

#endif