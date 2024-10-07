#ifndef MYFANCYFUNCTIONS_H
#define MYFANCYFUNCTIONS_H
#include <iostream>
template<typename T>
T myMax(T a,T b){
    return (a<b)?b:a;
}

template<typename T>
T myMin(T a,T b){
    return (a<b)?a:b;
}
template<typename T>
void mySwap(T& pa,T& pb){
    T tmp=pa;   //kopia o wartosci z objektu a
    pa=pb;      // a staje sie kobia b
    pb=tmp;
}

template<typename T,typename D>
auto myAdd(T a,D b){
    return a+b;
}

//template for concetenating string and some number
//another template bc functions cannot have partial specialization
template< typename T>
std::string myAdd(std::string str,T nmbr){
    return str+std::to_string(nmbr);
}

template<typename T, typename Func>
void myProcess(T nmbr, Func func){
    func(nmbr);
}
#endif  //MYFANCYFUNCTIONS_H