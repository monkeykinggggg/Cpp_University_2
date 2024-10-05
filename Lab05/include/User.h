#ifndef USER_H
#define USER_H
#include "IKsiazka.h"
#include <algorithm>
#include <vector>
class User{
public:
//konstr. parametryczny oraz domyslny, gwarantujemy ze wektor zawsze na poczatku bedzie pusty
    User(string name=""):_name(name){_borrowed={};}
    void borrowBook(IKsiazka*p);
//zwraca prawde jezeli udalo sie odnalezc ksiazke u uzytkownika
    bool returnBook(IKsiazka*p);
    void displayBorrowedBooks()const;
    string getName()const{return _name;}
private:
    string _name;
    std::vector<IKsiazka*>_borrowed;
};
#endif  //USER_H