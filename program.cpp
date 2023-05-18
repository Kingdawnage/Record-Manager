#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Student.hpp"
#include "Employee.hpp"

using namespace std;

class SchoolRecords{
    private:
    vector<User*> users;
    vector<Student*> students;
    vector<Employees*> employees;
    
    public:
    SchoolRecords(){}

    void addUser(User* user){
        users.push_back(user);
        if(dynamic_cast<Student*>(user)){
            students.push_back(dynamic_cast<Student*>(user));
        }else if (dynamic_cast<Employees*>(user)){
            employees.push_back(dynamic_cast<Employees*>(user));
        }
    }

    void removeUser(int id){
        for(int i = 0; i < users.size(); i++){
            if (users[i]->getID() == id){
                users.erase(users.begin() + i);
                if (dynamic_cast<Student*>(users[i])){
                    for (int j = 0; j < students.size(); j++){
                        if (students[j]->getID() == id){
                            students.erase(students.begin() + j);
                            break;
                        }
                    }
                }else if (dynamic_cast<Employees*>(users[i])){
                    for (int j = 0; j < employees.size(); j++){
                        if (employees[j]->getID() == id){
                            employees.erase(employees.begin() + j);
                            break;
                        }
                    }
                }
                break;
            }
        }
    }

    void printUsers(){
        cout<<"All Users:\n";
        for (int i = 0; i < users.size(); i++){
            users[i] -> printInfo();
        }
    }
    
    void printStudents(){
        cout<<"All Students:\n";
        for (int i = 0; i < students.size(); i++){
            students[i] -> printInfo();
        }
    }
    
    void printEmployees(){
        cout<<"All Employees:\n";
        for (int i = 0; i < employees.size(); i++){
            employees[i] -> printInfo();
        }
    }
};

int main(){
    SchoolRecords school;
    // Create faux users and adding them to the database
    User* user1 = new Student(1, "Jack Yellow", "British", 14, "Star Class", 7);
    User* user2 = new Employees(2, "Dante Brasskin", "British", 25, 2345, "Karate Teacher");
    User* user3 = new Student(3, "Andrea Fernandez", "Mexican", 17, "Patriot Class", 10);
    User* user4 = new Employees(4, "Michelle Burnstead", "British", 21, 2314, "English Teacher");

    school.addUser(user1);
    school.addUser(user2);
    school.addUser(user3);
    school.addUser(user4);

    school.printUsers();

    return 0;
}