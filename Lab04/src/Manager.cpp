#include "Manager.h"
void Manager::przedstawSie()const{
    std::cout<<"Jestem menagerem.\n"
            <<"Mam na imie: "<<_name<<" "<<_surname
            <<" i moim numerem ID jest: "<<_id<<"\n\n";}

void Manager::dodajPodwladnego(IPracownik* p){
    _podwladni.push_back(p);
}
void Manager::wygenerujRaport()const{
    std::cout<<"Generowanie raportu...\n";
    int t=0,p=0;
    for(auto &el: _podwladni){
        if(dynamic_cast<Tester*>(el))
            t++;
        else if(dynamic_cast<Programista*>(el))
            p++;
        if(t>=p)
            std::cout<<"Firma zużywa za dużo pamięci na testerów.\n";
        else 
            std::cout<<"Jest w porzadku\n";
    }
    
}
void Manager::zwolnijPracownika(IPracownik* p){
    for(auto&el:_podwladni){
        if(el==p)
            delete el;
    }
    std::cout<<"Zwalnianie Pamieci Testera.\n";
}
void Manager::ReleaseFromWork(){

}