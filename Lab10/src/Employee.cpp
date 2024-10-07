#include "Employee.h"
std::ostream& operator<<(std::ostream& out,const Employee& obj){
    out<<obj._name<<" - "<<obj._salary<<" PLN\n";
    return out;
}