#ifndef WARRIOR_H
#define WARRIOR_H
#include "Character.h"
class Warrior:public Character
{
public:
    Warrior(std::string name):Character(name){}
    Warrior()=default;
    void action()const override;
    ~Warrior()=default;
};
#endif  //WARRIOR_H