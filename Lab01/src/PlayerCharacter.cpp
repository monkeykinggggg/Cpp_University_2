#include "PlayerCharacter.h"
void gutils::handleGameObject(GameObject*p){
    if(p){
        p->render();
        p->attack();
    }
}

void gutils::handleRenderable(Renderable*p){
    if(p){
        p->draw();
        p->attack();
    }
}
void PlayerCharacter::attack()const{
    std::cout<<"PlayerCharacter attacking!\n";
}