#ifndef  Employee_h
#define Employee_h

#include <string>
#include "User.hpp"

class Employees : public User {
    private:
    int Employee_ID;
    std::string Occupation;
    public:
    Employees(int id, std::string _Name, std::string _Nationality, int _Age, int _Employee_ID, std::string _Occupation): // function to create an employee entity
    User (id, _Name, _Nationality, _Age){
        _Employee_ID = Employee_ID;
        _Occupation = Occupation;
    }
    void setEmployee_ID(int _Employee_ID){      // Creating relevant data setters and getters to update user information
        Employee_ID = _Employee_ID;
    }
    int getEmployee_ID(){
        return Employee_ID;
    }
    void setOccupation(std::string _Occupation){
        Occupation = _Occupation;
    }
    std::string getOccupation(){
        return Occupation;
    }
    void printInfo() override{
        User::printInfo();
        std::cout << "Employee ID: " << Employee_ID << std::endl;
        std::cout << "Occupation: " << Occupation << std::endl;
        std::cout << "........." << std::endl;
    }
};

#endif