#include "scene.h"

void engine::Scene::clear_items() {

}

void engine::Scene::remove_item(long id) {

}

void engine::Scene::add_item(Object* item) {
    this->scene_items.push_back(item);
}

engine::Object *engine::Scene::get_object_by_id(long id) {
    return nullptr;
}

std::vector<engine::Object *> engine::Scene::get_all_items() {
    return this->scene_items;
}
