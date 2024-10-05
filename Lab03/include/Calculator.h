#ifndef CALC_H
#define CALC_H
#include <iostream>
#include <functional>
class Calculator{
public:
    Calculator(int v=0):_val(v){}
    int getVal()const {return _val;}
    int operator()()const{return _val;}
    Calculator& operator=(const Calculator& other);
    Calculator& operator++();
    Calculator& operator--();
    Calculator operator*(int times)const;
    int operator()(std::function<int(int, int)> f,int,int);
    int operator()(std::function<int(int, int)> f,int);
    int operator()(std::function<int(int)> f);
private:
    int _val;
};
std::ostream& operator<<(std::ostream& out,const Calculator& obj);
#endif  //CALC_H
