#ifndef BEAR_H
#define BEAR_H
#include "Animal.h"
class Bear:public Animal{
public:
    void makeSound()const override
    {
        std::cout<<"Bear grunts\n";
    }
    void eat()const override
    {
        std::cout<<"Bear eats fisht\n";
    }
    void sleep()const override
    {
        //time management?
    }
    void useSkill()const override
    {
        std::cout<<"Bear uses Belly Drum skill \n";
    }
    void interact(Animal* other)const override
    {
        std::cout<<"Bear grunts at "<<other->getName()<<"\n";
    }
    std::string getName()const override{return "Bear";}
    ~Bear()=default;
};
#endif  //BEAR_H