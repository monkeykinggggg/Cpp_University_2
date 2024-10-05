    #include "PlayerCharacter.h"
    #include <memory>

    int main() {
        //GO* = PC*
        //R* = PC*
        //do wskaznikow bazy mozna przypisac wskaznik klasy pochodnej, zatem musi ona dziedziczyc po obu klasach
    std::unique_ptr<GameObject> gameObject = std::make_unique<PlayerCharacter>();
    std::unique_ptr<Renderable> renderableObject = std::make_unique<PlayerCharacter>();
    gutils::handleGameObject(gameObject.get());   //.get() method returns a pointer to the contained object
    gutils::handleRenderable(renderableObject.get());

    //TODO: wspólna baza?
    //TODO: gutils::handleGameObject(renderableObject.get());
    //TODO: gutils::handleRenderable(gameObject.get());

    return 0;

    }

    /* wynik:
    Rendering GameObject
    PlayerCharacter attacking!
    Drawing Renderable
    PlayerCharacter attacking!
    */