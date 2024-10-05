#ifndef KOMIKS_H
#define KOMIKS_H
class Komiks:public IKsiazka{
public:
    Komiks()=default;
    Komiks(string t, string a, int i,string g,int s):IKsiazka(t, a, i, g, s){}
private:
};
#endif  //KOMIKS_H