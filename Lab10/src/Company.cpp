#include "Company.h"
void Company::addEmployee(std::string name,std::string job,int salary){
    _employees.push_back(Employee(name,job,salary));
}
void Company::displayEmployees()const{
    for(auto& el: _employees)
        std::cout<<el;
}
void Company::sortEmployees(std::function<bool(const Employee&,const Employee&)>func){
    sort(_employees.begin(),_employees.end(),func);
}
void Company::removeEmployees(std::function<bool(const Employee&)>func){
    auto it=find_if(_employees.begin(),_employees.end(),func);
    while(it!=_employees.end()){
        _employees.erase(it);
        it=find_if(_employees.begin(),_employees.end(),func);
    }
}