#include <SFML/Graphics.hpp>
#include "engine/scene/scene.h"
#include "engine/render/renderer.h"

// for now it is a big debug field
int main()
{

    // TODO: Depending on the config, maybe fullscreen etc.
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    std::shared_ptr<sf::RenderWindow> renderTarget(&window);

    engine::Renderer renderer(renderTarget);
    auto * testScene = new engine::Scene();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.display();
    }

    return 0;
}