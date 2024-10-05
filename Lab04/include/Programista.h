#ifndef PROGRAMISTA_H
#define PROGRAMISTA_H
#include "IPracownik.h"
class Programista:public IPracownik{
public:
    Programista(std::string name, std::string surname, int i,std::string lang):IPracownik(name,surname,i),_lang(lang){}
    void przedstawSie()const override;
    ~Programista()=default;
private:
    std::string _lang;
};
#endif  //PROGRAMISTA_H