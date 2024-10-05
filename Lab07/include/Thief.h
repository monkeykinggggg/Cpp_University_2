#ifndef THIEF_H
#define THIEF_H
#include "Character.h"
class Thief:public Character
{
public:
    Thief(std::string name):Character(name){}
    Thief()=default;
    void action() const override;
    ~Thief()=default;
};
#endif  //THIEF_H