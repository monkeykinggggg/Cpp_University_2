#include "User.h"
void User::borrowBook(IKsiazka*p){
    _borrowed.push_back(p);
    std::cout<<"Uzytkownik "<<_name<<" wypozyczyl ksiazke: "<<p->getTitle()<<"\n";
}

bool User::returnBook(IKsiazka*p){
    bool flag=false;
    for(int i=0;i<_borrowed.size();i++){
        if(_borrowed[i]==p){
            flag=true;
            std::cout<<"Uzytkownik: "<<_name<<" zwrocil ksiazke: "<<(*_borrowed[i]).getTitle()<<"\n";
            _borrowed.erase(_borrowed.begin()+i);
        }
    }
    return flag;
}
void User::displayBorrowedBooks()const{
    std::cout<<"Lista wypozyczonych ksiazek przez uzytkownika:\n";
    for(auto& el: _borrowed)
        std::cout<<(*el).getTitle()<<"\n\n";
}