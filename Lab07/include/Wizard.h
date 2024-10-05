#ifndef WIZARD_H
#define WIZARD_H
#include "Character.h"
class Wizard:public Character
{
public:
    Wizard(std::string name):Character(name){}
    Wizard()=default;
    void cast_spell()const{std::cout<<"Gandalf the Wizard casts a spell!\n";}
    void action()const override;
    ~Wizard()=default;
};
#endif  //WIZARD_H