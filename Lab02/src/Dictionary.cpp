#include "Dictionary.h"
void Dictionary::add(string name,int nmbr){
    _names.push_back(name);
    _quantity.push_back(nmbr);
}

void Dictionary::remove(string name){
    int i=0;
    for(auto& el:_names){
        if(el==name){
            break;
        }
        i++;
    }
    _names.erase(_names.begin()+i);
    _quantity.erase(_quantity.begin()+i);
}

Dictionary::Dictionary(const Dictionary& other){
    _names={};
    _quantity={};
    for(auto el:other._names)
        _names.push_back(el);
    for(auto el:other._quantity)
        _quantity.push_back(el);
}

Dictionary::Dictionary(Dictionary&& other){
    int size=other._names.size();
    _names.resize(size);
    _quantity.resize(size);

    for(int i=0;i<size;i++){
        _names[i]=other._names[i];
        other._names[i]="";
    }

    for(int i=0;i<size;i++)
        _quantity[i]=std::exchange(other._quantity[i],5);
}

int Dictionary::operator[](string name)const{
    int i=0;
    for(auto& el:_names){
        if(el==name){
            return _quantity[i];
        }
    }
    return 0;
}