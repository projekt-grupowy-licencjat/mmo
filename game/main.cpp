#include <SFML/Graphics.hpp>
#include <memory>
#include <iostream>
#include "engine/scene/scene.h"
#include "engine/render/renderer.h"
#include "engine/object/object.h"
#include "engine/events/control/controllable.h"


// TODO:    REFACTOR THE CODE TO USE REFERENCES WHEREVER POSSIBLE
// for now it is a big debug field

class Hero : public engine::Object, public engine::events::Controllable {
public:
    Hero(long id, const engine::object::Properties& properties) : engine::Object(id, properties) {};
    void execute_actions(sf::Event &event) override {
        if (event.type == sf::Event::KeyPressed) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                // TODO: should work based on the delta time etc, and should have method which will update state every frame
                this->set_position(this->get_x() + 10, this->get_y());
                std::cout << "Test";
            }
        }
    }
};

// TODO: decide on tile size
int main()
{

    // TODO: Depending on the config, maybe fullscreen etc.
    sf::RenderWindow window(sf::VideoMode(800, 600), "Flappy");
    engine::Renderer renderer(&window);
    engine::Scene scene;

    engine::object::Properties properties(50, 50, 100, "doge.png", "", "");
    Hero hero(1, properties);
    scene.add_item(&hero);

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            hero.execute_actions(event);
        }
        window.clear(sf::Color::Black);
        renderer.draw(&scene);
        window.display();
        hero.next_frame();
    }



    return 0;
}