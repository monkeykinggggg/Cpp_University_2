#include "Wizard.h"
void Wizard::action()const
    {
        if (_state == State::Idle)
            std::cout << _name << " the Wizard is idling around.\n";
    }