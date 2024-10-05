#include "Library.h"

void Library::addMaterial(IKsiazka*p)
{
    _resources.push_back(p);
}

void Library::displayAllBooks()const
{
    std::cout<<"Lista ksiazek w bibliotece:\n\n";
    for(const auto& el:_resources)
        std::cout<<*el;
}

void Library::borrowBook(string title, User& user)
{
    auto it=find_if(_resources.begin(),_resources.end(),[&title](IKsiazka*p_to_book){return p_to_book->getTitle()==title;});
    int i;
    if(it!=_resources.end())
    {
        i=it-_resources.begin();    //mamy indeks naszej ksiazki ktora chcemy wypozyczyc
        if(_resources[i]->getAvailability()){
        user.borrowBook(_resources[i]);
        _resources[i]->setAvailability(false);
        }
        else{
            std::cout<<"Przepraszamy, książka \""<<_resources[i]->getTitle()<<"\" jest już wypożyczona.\n";
        }
    }
    else
    {
        std::cout<<"Przepraszamy, książka \""<< title <<"\" nie istnieje.\n";
    }
}

void Library::returnBook(string title, User& user)
{
    auto it=find_if(_resources.begin(),_resources.end(),[&title](IKsiazka*p){return title==p->getTitle();});
    if(it!=_resources.end()){
        int index=it-_resources.begin();
        if(user.returnBook(_resources[index])){      //uzytkownik posiada ta ksiazke
            _resources[index]->setAvailability(true);
        }
        else{
            std::cout<<"Przepraszamy, książka W pustyni i w puszczy nie została wypożyczona przez tego użytkownika.\n";
        }
    }
    else{
        std::cout<<"Przepraszamy, książka W pustyni i w puszczy nie istnieje.\n";
    }

}