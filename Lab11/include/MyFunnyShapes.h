#ifndef MYFUNNYSHAPES_H
#define MYFUNNYSHAPES_H
#include <iostream>
template<typename T>
class Shape{
public:
    virtual T area()const=0;
};

template<typename T>
class Circle:public Shape<T>{
public:
    friend std::ostream& operator<<(std::ostream& o, const Circle<T>& obj){
        o<< "Circle - Radius: " << obj._radius;
        return o;
    }
    Circle()=default;
    Circle(T r):_radius(r){}
    T area()const override{return _radius*_radius*3.14;}
    Circle<T> operator+(const Circle& other)const{
        Circle<T>tmp{_radius+other._radius};
        return tmp;
    }
private:
    T _radius;
};

template<typename T>
class Rectangle:public Shape<T>{
public:
    friend std::ostream& operator<<(std::ostream& o, const Rectangle<T>& obj){
            o   << "Rectangle:\n"
                << "Length: " << obj._a << "\n"
                << "Width:  " << obj._b;
            return o;
        }
    Rectangle()=default;
    Rectangle(T a,T b):_a(a),_b(b){}
    T area()const override{return _a*_b;}
    Rectangle<T> operator+(const Rectangle<T> other){
        return Rectangle<T>(_a+other._a,_b+other._b);
    }
private:
    T _a,_b;
};
#endif  //MYFUNNYSHAPES_H
