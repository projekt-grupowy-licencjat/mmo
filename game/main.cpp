#include <SFML/Graphics.hpp>
#include <memory>
#include <iostream>
#include "engine/scene/scene.h"
#include "engine/render/renderer.h"
#include "engine/object/object.h"


// TODO:    REFACTOR THE CODE TO USE REFERENCES WHEREVER POSSIBLE
// for now it is a big debug field

class Hero : public engine::Object {
public:
    Hero(long id, const engine::object::Properties& properties) : engine::Object(id, properties) {};
};

// TODO: decide on tile size
int main()
{

    // TODO: Depending on the config, maybe fullscreen etc.
    sf::RenderWindow window(sf::VideoMode(800, 600), "Flappy");
    engine::Renderer renderer(&window);
    engine::Scene scene;

    engine::object::Properties properties(50, 50, 32, "sprite.jpg", "", "");
    Hero hero(1, properties);
    scene.add_item(&hero);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        renderer.draw(&scene);
        window.display();
        hero.next_frame();
    }



    return 0;
}