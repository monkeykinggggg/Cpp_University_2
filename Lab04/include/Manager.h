#ifndef MANAGER_H
#define MANAGER_H
#include "IPracownik.h"
#include "Tester.h"
#include "Programista.h"
#include <vector>
class Manager:public IPracownik{
public:
    Manager(std::string name, std::string surname, int i):IPracownik(name,surname,i){}
    void przedstawSie()const override;
    void dodajPodwladnego(IPracownik* p);
    void wygenerujRaport()const;
    void zwolnijPracownika(IPracownik* p);
    void ReleaseFromWork();
    ~Manager()=default;
private:
    std::vector<IPracownik*>_podwladni;
};
#endif  //MANAGER_H