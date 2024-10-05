#ifndef CZASOPISMO_H
#define CZASOPISMO_H
class Czasopismo:public IKsiazka{
public:
    Czasopismo()=default;
    Czasopismo(string t, string a, int i,string g,int s):IKsiazka(t, a, i, g, s){}
private:
};
#endif  //CZASOPISMO_H