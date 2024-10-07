#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
class Employee{
public:
    friend std::ostream& operator<<(std::ostream& out,const Employee& obj);
    Employee()=default;
    Employee(std::string name,std::string job, int salary):_name(name),_job(job),_salary(salary){}
    int getSalary()const{return _salary;}
private:
    std::string _name;
    std::string _job;
    int _salary;
};
std::ostream& operator<<(std::ostream& out,const Employee& obj);
#endif  //EMPLOYE_H