#ifndef MMO_RENDERER_H
#define MMO_RENDERER_H

#include <SFML/Graphics.hpp>
#include <memory>
#include <utility>
#include "engine/scene/scene.h"

namespace engine {
    // Rendering unit - connects abstract entities like Objects, scenes etc with SFML
    // TODO: Rethink if needed at all given that now object inherits sf::Drawable
    // TODO: maybe use it as something which applies configuration to drawing then?
    // TODO: Should be able to read a config and see what to draw and what not
    class Renderer {
    public:
        // TODO: Finish this
        explicit Renderer(sf::RenderTarget &target);

        ~Renderer() = default;

        // TODO: Implement drawing from scene
        void draw(engine::Scene &scene);
    private:
        sf::RenderTarget &target;
    };
}

#endif //MMO_RENDERER_H
