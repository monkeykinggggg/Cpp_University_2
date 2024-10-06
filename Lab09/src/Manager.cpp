#include "Manager.h"
void Manager::display(std::ostream& out)const{
    int additional= _size_of_team*10+0.25*_salary;
    out<<_name<<" zarabia "<<_salary<< "PLN i "<<additional<<" premi managera\n";
}