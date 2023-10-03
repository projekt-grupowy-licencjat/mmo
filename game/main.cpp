#include <SFML/Graphics.hpp>
#include <memory>
#include "engine/scene/scene.h"
#include "engine/render/renderer.h"
#include "engine/object/item.h"
#include "engine/object/object.h"

// for now it is a big debug field
int main()
{

    // TODO: Depending on the config, maybe fullscreen etc.
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    std::shared_ptr<sf::RenderWindow> renderTarget(&window);

    engine::Renderer renderer(renderTarget);
    std::shared_ptr<engine::Scene> testScene = std::make_shared<engine::Scene>();
    auto item = std::make_shared<engine::Item>(0, 0, 0);
    testScene->add_item(item);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        renderer.draw(testScene);
        window.display();
    }

    return 0;
}