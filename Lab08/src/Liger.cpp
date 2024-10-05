#include "Liger.h"
std::string Liger::getName()const{
    return "Liger";
}
void Liger::display()const{
    std::cout<<"It's a "<<getName()<<"\n";
}
