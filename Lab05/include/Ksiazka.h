#ifndef KSIAZKA_H
#define KSIAZKA_H
class Ksiazka:public IKsiazka{
public:
    Ksiazka()=default;
    Ksiazka(string t, string a, int i,string g,int s):IKsiazka(t, a, i, g, s){}
private:
};
#endif  //KSIAZKA_H