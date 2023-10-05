#include <SFML/Graphics.hpp>
#include <memory>
#include "engine/scene/scene.h"
#include "engine/render/renderer.h"
#include "engine/object/item.h"
#include "engine/object/object.h"

// TODO:    REFACTOR THE CODE TO USE REFERENCES WHEREVER POSSIBLE
// for now it is a big debug field
int main()
{

    // TODO: Depending on the config, maybe fullscreen etc.
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    std::shared_ptr<sf::RenderWindow> renderTarget(&window);

    engine::Renderer renderer(*renderTarget);
    engine::Scene test_scene{};

    std::shared_ptr<engine::Object> item = std::make_shared<engine::Item>(0, 0, 0);
    test_scene.add_item(item);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        renderer.draw(test_scene);

        window.display();
    }



    return 0;
}