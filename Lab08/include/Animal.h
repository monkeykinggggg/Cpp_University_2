#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
//klasa bazowa - abstrakcyjna (ma przyn. jedna f.czysto wirtualna,nie mozemy tworzyc jej obiektu )
class Animal{
public:
//same metody czysto wirtualne, nie mozemy utworzyc obiektu w ogole tego typu
    virtual void roar()const=0;
    virtual void display()const=0;
    virtual void climb()const=0;
    w
};
#endif  //ANIMAL_H