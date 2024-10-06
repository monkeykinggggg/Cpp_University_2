#include "Employee.h"
void Employee::display(std::ostream& out)const{
    out<<_name<<" zarabia "<<_salary<< " PLN \n";
}
std::ostream& operator<<(std::ostream& out,const Employee& obj){
    obj.display(out);
    return out;
}