#ifndef MMO_RENDERER_H
#define MMO_RENDERER_H

#include <SFML/Graphics.hpp>
#include "engine/scene/scene.h"

class Renderer {
public:
    explicit Renderer(sf::RenderTarget * target) {
        this->target = target;
    }

    // TODO: Implement drawing from scene
    void draw(Scene * scene) {

    }

    ~Renderer() {
        delete target;
    }
private:
    sf::RenderTarget * target;
};

#endif //MMO_RENDERER_H
