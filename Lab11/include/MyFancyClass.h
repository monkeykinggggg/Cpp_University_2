#ifndef MYFANCYCLASS_H
#define MYFANCYCLASS_H
#include <iostream>
template<typename T>
class Stack{
public:
    Stack():_size(0),_table(nullptr),_p(nullptr){}
    Stack(int size):_size(size),_table(new T[size]),_p(_table){}
    void push(T var){
        *_p=var;
        if(_p < _table + _size)
            _p++;
    }
    T pop(){
        return *(_p-1);}
    void print()const{
        for(int i=0;i<_size;i++){
            std::cout<<_table[i]<<", ";

        }
        std::cout<<"\n";
    }
private:
    T* _table;
    int _size;
    T* _p;
};


#endif  //MYFANCYCLASS_H