#ifndef LION_H
#define LION_H
#include "Animal.h"
class Lion:virtual public Animal{
public:
    virtual void roar()const override;
    virtual void display()const override;
    virtual void climb()const override;
    virtual std::string getName()const override;
};
#endif  //LION_H