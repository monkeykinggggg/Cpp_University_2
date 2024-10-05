#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
class GameObject{
public:
    void render()const{
        std::cout<<"Rendering GameObject\n";
    }
    virtual void attack()const{
        std::cout<<"GameObject attacking!\n";
    }
    virtual ~GameObject()=default;
};


class Renderable{
public:
    void draw()const{
        std::cout<<"Drawing Renderable\n";
    }
    virtual void attack()const{
        std::cout<<"Renderable attacking!\n";
    }
    virtual ~Renderable()=default;
};

class PlayerCharacter: public GameObject, public Renderable
{
public:
    virtual void attack()const override;
    virtual ~PlayerCharacter()=default;
};

namespace gutils{
void handleGameObject(GameObject*);
void handleRenderable(Renderable*);
};
#endif  //PLAYER_H