#ifndef LION_H
#define LION_H
#include "Animal.h"
class Lion:public Animal{
public:
    void makeSound()const override
    {
        std::cout<<"Lion roars\n";
    }
    void eat()const override
    {
        std::cout<<"Lion eats meet\n";
    }
    void sleep()const override
    {
        //time management?
    }
    void useSkill()const override
    {
        std::cout<<"Lion uses Hyper Voice skill \n";
    }
    void interact(Animal* other)const override
    {
        std::cout<<"Lion roars at "<<other->getName()<<"\n";
    }
    std::string getName()const override{return "Lion";}
    ~Lion()=default;
};
#endif  //LION_H