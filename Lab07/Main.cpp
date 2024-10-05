/* Zadaniem będzie zaimplementowanie systemu zarządzania postaciami w grze. System powinien umożliwiać tworzenie postaci różnych typów (wojownik, czarodziej, złodziej) oraz zarządzanie ich stanami.

Wymagania:
    
    - Zdefiniuj klasę State, która będzie przechowywała stan postaci (Idle, Attacking, Defending, Resting).
    - Zdefiniuj klasę Character, która będzie bazową klasą dla różnych typów postaci.
    - Utwórz klasy Warrior, Wizard i Thief, które dziedziczą po klasie Character i implementują jej metody wirtualne.
    - Każda postać powinna mieć możliwość zmiany swojego stanu (Idle, Attacking, Defending, Resting).
    - Pamiętaj, że to zadanie z dziedziczenia, polimorfizmu i prezentujące użycie dynamic_cast. Każda postać powinna mieć unikalne cechy i zachowania.
    - Proszę zadbać o zarządzanie pamięcią. Pamiętaj o zwolnieniu pamięci po utworzonych postaciach.

Pliku Main.cpp nie wolno modyfikować, chyba że w tekście zadania podano inaczej (Oznaczenie TODO:).

Program wyjściowy powinien składać się z czytelnego kodu. Powinna być spełniona zasada D.R.Y. - Don’t Repeat Yourself.

Zadania oceniane są wg algorytmu:

    Warunkiem przystąpienia do oceniania programu jest jego poprawna kompilacja (bez błędów).
    Dokumentacja - 1 pkt.
    Poprawna kompilacja (bez ostrzeżeń) - 2 pkt.
    Poprawne wykonanie (odpowiednie wyjście, brak wycieków pamięci itp.) - 3 pkt.
    Ocena kodu (pod względem projektowym, zgodności z OOP, przejrzystości oraz sposobu implantacji) - maks. 4 pkt. */


#include <iostream>
#include <vector>
#include "Character.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Thief.h"

void perform_action(Character* character) {
    switch (character->get_state()) {
        case State::Idle:
        {
            character->action();
            break;
        }
        case State::Attacking:
        {
            if(dynamic_cast<Warrior*>(character))
                character->action();
            break;
        }
        default:
            break;
        // TODO: Implement me - enum states, and use dynamic caast to get our desired outcome! 
    }
}

int main() {
    std::vector<Character*> characters;

    characters.push_back(new Warrior("Conan"));
    characters.push_back(new Wizard("Gandalf"));
    characters.push_back(new Thief("Carmen Sandiego"));

    for (auto* character : characters) {
        character->set_state(State::Idle);
    }

    for (auto* character : characters) {
        auto* p=dynamic_cast<Wizard*>(character);
        if(p){
            //character->cast_spell();              --> o member named 'cast_spell' in 'Character'
            p->cast_spell();
        }
        // TODO: Implement me - remember - only Wizzard (or Druid or Warlock, but we dont have them) can cast spell use dynamic cast to get our desired outcome!
    }

    for (auto* character : characters) {
        perform_action(character);
    }
    for (auto* character : characters) {
        character->set_state(State::Attacking);
    }
    for (auto* character : characters) {
        perform_action(character);
    }

    for (auto* character : characters) {
        if (auto* unrelated = dynamic_cast<std::string*>(character)) {
            std::cout << "This code is never reached, as the dynamic_cast failed.\n";
            // Egzample of unreachable code and checking for class of character - if it's a string type character, then... 
        }
    }

    for (auto* character : characters) {
        delete character;
    }
    characters.clear();

    return 0;
}


// Spodziewany output: 

/*

Gandalf the Wizard casts a spell!
Conan the Warrior is idling around.
Gandalf the Wizard is idling around.
Carmen Sandiego the Thief is idling around.
Conan the Warrior swings a sword!

*/

// Ponadprogramowe:
/*
(feel free to change idling for Defending and resting in feperet loop for different types of characters - use dynamic cast to get desired results)
*/