#ifndef LIGER_H
#define LIGER_H
#include "Tiger.h"
#include "Lion.h"
//klasa - hybryda tygrysa i lwa
class Liger:public Lion, public Tiger{
//Klasa Liger powinna w wywołaniu metody climb powodować wywołanie metody climb() odpowiedniej klasy rodzica. 
public:
    virtual void roar()const override{
        Tiger::roar();
    }
    virtual void display()const override;
    virtual void climb()const override{
        Tiger::climb();
    }
    std::string getName()const override;
};
#endif  //LIGER_H