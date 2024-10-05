#ifndef ZOO_H
#define ZOO_H
#include "Animal.h"
#include <vector>
//klasa - kontener przechowujacy zwierzeta
class Zoo{
//    - Wszystkie metody Klasy Zoo powinny działać na bazie prostej lambdy.
public:
    void addAnimal(Animal* a){_animal_list.push_back(a);}
    void makeAllAnimalsRoar()const;
    void displayAnimals()const;
private:
    std::vector<Animal*>_animal_list;
};ww
#endif  //ZOO_H