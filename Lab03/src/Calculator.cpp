#include "Calculator.h"
Calculator& Calculator::operator=(const Calculator& other){
        if(this!=&other)
        {
            _val=other._val;
        }
        return *this;
    }

Calculator& Calculator::operator++(){
        _val++;
        return *this;
    }

Calculator& Calculator::operator--(){
    _val--;
    return *this;
}

Calculator Calculator::operator*(int times)const{
    Calculator tmp=_val*times;
    return tmp;
}
int Calculator::operator()(std::function<int(int, int)> f,int a,int b){
    return f(a,b);
}
int Calculator::operator()(std::function<int(int, int)> f,int a){
    return f(a,_val);
}
int Calculator::operator()(std::function<int(int)> f){
    return f(_val);
}

std::ostream& operator<<(std::ostream& out,const Calculator& obj){
    return out<<obj.getVal();
}