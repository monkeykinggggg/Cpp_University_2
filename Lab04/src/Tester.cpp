#include "Tester.h"
void Tester::przedstawSie()const{
    std::cout<<"Jestem testerem.\n"
            <<"Mam na imie: "<<_name<<" "<<_surname
            <<" i moim numerem ID jest: "<<_id<<"\n"
            <<"A odpowiedz na to, czy automatyzuje testy brzmi - ";
    if(_auto)
        std::cout<<"tak\n\n";
    else
        std::cout<<"nie\n\n";}