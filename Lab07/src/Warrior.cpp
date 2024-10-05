#incldue "Warrior.h"
void Warrior:action()const{
        if (_state == State::Idle) {
            std::cout << _name << " the Warrior is idling around.\n";
        } else if (_state == State::Attacking) {
            std::cout << _name << " the Warrior swings a sword!\n";
        }
    }