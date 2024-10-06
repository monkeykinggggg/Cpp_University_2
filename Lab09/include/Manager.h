#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
class Manager:public Employee{
public:
    Manager()=default;
    Manager(std::string name,int s,int size):Employee(name,s),_size_of_team(size){}
    virtual void display(std::ostream& out)const override;
    ~Manager()=default;
private:
    int _size_of_team;
};
#endif  //MANAGER_H