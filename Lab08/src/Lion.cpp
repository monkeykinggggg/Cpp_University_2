#include "Lion.h"
void Lion::roar()const{
    std::cout<<"Roarrr, I am a "<<getName()<<"!\n";
}
void Lion::display()const{
    std::cout<<"It's a "<<getName()<<"\n";
}
void Lion::climb()const{
    std::cout<<"I am not able to climb!\n";
}
std::string Lion::getName()const{
    return "Lion";
}