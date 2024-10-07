#ifndef COMPANY_H
#define COMPANY_H
#include "Employee.h"
#include <vector>
#include <algorithm>
class Company{
public:
    void addEmployee(std::string name,std::string job,int salary);
    void displayEmployees()const;
    void sortEmployees(std::function<bool(const Employee&,const Employee&)>func);
    void removeEmployees(std::function<bool(const Employee&)>func);
private:
    std::vector<Employee> _employees;

};
#endif  //COMPANY_H