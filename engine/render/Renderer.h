#ifndef MMO_RENDERER_H
#define MMO_RENDERER_H

#include <SFML/Graphics.hpp>

class Renderer {
public:
    explicit Renderer(sf::RenderTarget* target) {
        this->target = target;
    }

    // TODO: Implement drawing from scene
    void draw() {

    }
private:
    sf::RenderTarget * target;
};

#endif //MMO_RENDERER_H
