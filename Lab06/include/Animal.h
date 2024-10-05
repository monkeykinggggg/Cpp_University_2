#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
class Animal{
public:
    virtual void makeSound()const=0;
    virtual void eat()const=0;
    virtual void sleep()const=0;
    virtual void useSkill()const=0;
    virtual void interact(Animal* other)const=0;
    virtual std::string getName()const=0;
    virtual ~Animal()=default;
};
#endif  //ANIMAL_H