#include <iostream>
#include "renderer.h"

void engine::Renderer::draw(Scene* scene) {
    auto items = scene->get_all_items();

    for (const auto item : items) {
        this->target->draw(*item);
    }
}

engine::Renderer::Renderer(sf::RenderTarget *target) {
    this->target = target;
}
