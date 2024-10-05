#ifndef TIGER_H
#define TIGER_H
#include "Animal.h"
class Tiger:public Animal{
public:
    void makeSound()const override
    {
        std::cout<<"Tiger growls\n";
    }
    void eat()const override
    {
        std::cout<<"Tiger eats meet\n";
    }
    void sleep()const override
    {
        //time management?
    }
    void useSkill()const override
    {
        std::cout<<"Tiger uses Flare Blitz skill \n";
    }
    void interact(Animal* other)const override
    {
        std::cout<<"Tiger stares at "<<other->getName()<<"\n";
    }
    std::string getName()const override{return "Tiger";}
    ~Tiger()=default;
};
#endif  //Tiger_h