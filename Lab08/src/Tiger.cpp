#include "Tiger.h"
void Tiger::roar()const{
    std::cout<<"Roarrr, I am a "<<getName()<<"!\n";
}
void Tiger::display()const{
    std::cout<<"It's a "<<getName()<<"\n";
}
void Tiger::climb()const{
    std::cout<<"I am able to climb!\n";
}
std::string Tiger::getName()const{
    return "Tiger";
}