#ifndef CHAR_H
#define CHAR_H
#include <iostream>
enum State{Idle, Attacking, Defending, Resting};
//bazowa klasa dla roznych typow postaci
class Character
{
public:
    Character(std::string name);
    Character()=default;
    void set_state(State kind){_state=kind;}
    int get_state(){return _state;}
    virtual void action()const=0;
    virtual ~Character()=default;
protected:
    std::string _name;
    State _state;
};
#endif  //CHAR_H