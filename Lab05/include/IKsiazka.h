#ifndef IKSIAZKA_H
#define IKSIAZKA_H
#include <iostream>
using std::string;
class IKsiazka{
public:
    friend std::ostream& operator<<(std::ostream& out,const IKsiazka& obj);
//explicite zapisane, ze domyslny konstruktor ma byc utworzony przez kompilator
//abysmy mogli tworzyc tez bezargumentowo obiekty klasy oraz pochodnych klas
    IKsiazka()=default;
//konstr. parametryczny
    IKsiazka(string t, string a, int i,string g,int s):_title(t),_author(a),_id(i),_genre(g),_shelf(s),_availability(true){}
//dane z zewnatrz prywatne, ale dla potomkow publiczne, by mogli miec do nich prosty dostep
    string getTitle(){return _title;}
    void setAvailability(bool x){_availability=x;}
    bool getAvailability(){return _availability;}
protected:
    string _title;
    string _author;
    int _id;
    string _genre;
    int _shelf;
    bool _availability;
};
std::ostream& operator<<(std::ostream& out,const IKsiazka& obj);
#endif  //IKSIAZKA_H