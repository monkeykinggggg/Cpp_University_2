#ifndef IPRACOWNIK_H
#define IPRACOWNIK_H
#include <iostream>
//interfejs IPracownika
//klasa abstrakcyjna    
class IPracownik{
public:
    IPracownik()=default;
    IPracownik(std::string name, std::string surname, int i):_name(name),_surname(surname),_id(i){}
    virtual void przedstawSie()const=0;
    virtual ~IPracownik()=default;
protected:
    std::string _name;
    std::string _surname;
    int _id;
};
#endif  //IPRACOWNIK_H