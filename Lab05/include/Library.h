#ifndef LIB_H
#define LIB_H
#include <vector>
#include "IKsiazka.h"
#include "User.h"
class Library{
public:
    void addMaterial( IKsiazka*p);
    void borrowBook(string title, User& user);
    void returnBook(string title, User& user);
    void displayAllBooks()const;
private:
    std::vector<IKsiazka*>_resources;
};
#endif  //LIB_H