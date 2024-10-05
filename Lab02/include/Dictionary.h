#ifndef DICT_H
#define DICT_H
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
class Dictionary{
public:
    Dictionary(){   _names={};
                    _quantity={};}
    Dictionary(const Dictionary& other);
    Dictionary(Dictionary&& other);
    void add(string name,int nmbr);
    void remove(string name);
    Dictionary&& move(){return std::move(*this);}
    int operator[](string name)const;
/*
dodawania, odczytywania, przenoszenia i usuwania elementów.*/
private:
    vector<string>_names;
    vector<int>_quantity;
};
#endif  //DICT_H