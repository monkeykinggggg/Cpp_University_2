#ifndef TIGER_H
#define TIGER_H
#include "Animal.h"
//klasa pochodna do klasy animal
class Tiger: virtual public Animal{
public:
    virtual void roar()const override;
    virtual void display()const override;
    virtual void climb()const override;
    std::string getName()const override;
};
#endif  //TIGER_H