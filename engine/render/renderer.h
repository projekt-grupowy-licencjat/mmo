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
    class Renderer {
    public:
        explicit Renderer(std::shared_ptr<sf::RenderTarget> target) {
            this->target = std::move(target); // TODO: I don't know if moving here is ok choice, may cause bugs
        };

        ~Renderer() = default;

        // TODO: Implement drawing from scene
        void draw(const std::shared_ptr<Scene>& scene);
    private:
        std::shared_ptr<sf::RenderTarget> target;
    };
}

#endif //MMO_RENDERER_H
