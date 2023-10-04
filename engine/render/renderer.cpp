#include "renderer.h"

void engine::Renderer::draw(const std::shared_ptr <Scene>& scene) {
    //TODO: implement it, debug only
    auto items = scene->get_all_items();
    for (const auto& item : items) {
        this->target->draw(*item);
    }
}
