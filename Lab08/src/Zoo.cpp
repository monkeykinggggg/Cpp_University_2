#include "Zoo.h"
void Zoo::makeAllAnimalsRoar()const{
    for(auto& animal:_animal_list)
        animal->roar();
}
void Zoo::displayAnimals()const{
    for(auto& animal:_animal_list)
    {
        animal->display();
        animal->climb();
    }
}