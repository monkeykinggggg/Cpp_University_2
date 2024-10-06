#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
//nie jest to klasa abstrakcyjna, poniewaz tworzymy obiekty jej typu -
//czyli nie bedzie zadnych funk. czysto wirtualnych
class Employee{
public:
    friend std::ostream&  operator<<(std::ostream& out,const Employee& obj);
    Employee()=default;
    Employee(std::string name,int s):_name(name),_salary(s){}
    std::string getName()const{return _name;}
    int getSalary()const{return _salary;}
    virtual void display(std::ostream& out)const;
    virtual ~Employee()=default;
protected:
    std::string _name;
    int _salary;
};
std::ostream&  operator<<(std::ostream& out,const Employee& obj);
#endif  //EMPLOYEE_H