#include "Thief.h"
void Thief::action()const
    {
        if (_state == State::Idle) 
            std::cout << _name << " the Thief is idling around.\n";
    }