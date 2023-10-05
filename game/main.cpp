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
    Hero(double x, double y, long id, const sf::Sprite &sprite) : engine::Object(x, y, id, sprite) {};
private:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override {
        target.draw(this->get_frame());
    };
};

// TODO: decide on tile size
int main()
{

    // TODO: Depending on the config, maybe fullscreen etc.
    sf::RenderWindow window(sf::VideoMode(800, 600), "Flappy");
    engine::Renderer renderer(&window);
    engine::Scene scene;

    sf::Texture texture;
    bool yes = texture.loadFromFile("doge.png");

    sf::Sprite hero_sprite;
    hero_sprite.setTexture(texture);
    hero_sprite.setPosition(50, 50);
    Hero hero(1,1,1, hero_sprite);

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
    }



    return 0;
}