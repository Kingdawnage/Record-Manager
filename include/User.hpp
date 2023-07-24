#ifndef  User_h
#define User_h

#include <string>
#include <iostream>

class User {
    private : 
    std::string Name;
    std::string Nationality;
    int Age;
    int ID;
    public :
    virtual ~User(){}

    User (int id, std::string _Name, std::string _Nationality, int _Age){ // Function to create a human entity
        Name = _Name;
        Nationality = _Nationality;
        Age = _Age;
        ID = id;
    }
    void setName(std::string _Name){     //creating relevant data setters and getters
        Name = _Name;
    }
    std::string getName(){
        return Name;
    }
    void setNationality(std::string _Nationality){
        Nationality = _Nationality;
    }
    std::string getNationality(){
        return Nationality;
    }
    void setAge(int _Age){
        Age = _Age;
    }
    int getAge(){
        return Age;
    }
    int getID(){
        return ID;
    }
    virtual void printInfo(){
        std::cout << "User ID: " << ID << std::endl;
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Nationality: " << Nationality << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }
};

#endif