#ifndef TESTER_H
#define TESTER_H
#include "IPracownik.h"
class Tester:public IPracownik{
public:
    Tester(std::string name, std::string surname, int i,bool automatic):IPracownik(name,surname,i),_auto(automatic){}
    void przedstawSie()const override;
    ~Tester()=default;
private:
    bool _auto;
};
#endif //TESTER_H