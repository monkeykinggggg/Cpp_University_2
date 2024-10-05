#include "IKsiazka.h"
std::ostream& operator<<(std::ostream& out,const IKsiazka& obj){
    out<<"Tytul: "<<obj._title<<"\n"
        <<"Autor: "<<obj._author<<"\n"
        <<"Id ksiazki: "<<obj._id<<"\n"
        <<"Gatunek: "<<obj._genre<<"\n"
        <<"Na polce: "<<obj._shelf<<"\n"
        <<"Status: ";
    if(obj._availability)
        out<<"Dostepny\n\n";
    else
        out<<"Niedostepny\n\n";
    return out;
}