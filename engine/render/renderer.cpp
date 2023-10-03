#include "renderer.h"

void engine::Renderer::draw(std::shared_ptr <Scene> scene) {
    //TODO: implement it, debug only
    sf::CircleShape shape(50.f);
    this->target->draw(shape);
}
