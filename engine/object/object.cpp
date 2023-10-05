#include "object.h"

engine::Object::Object(long id, const engine::object::Properties& properties) {
    this->id = id;
    this->x = properties.getStartX();
    this->y = properties.getStartY();
}

long engine::Object::get_id() const {
    return this->id;
}

double engine::Object::get_x() const {
    return this->x;
}

double engine::Object::get_y() const {
    return this->y;
}

std::pair<double, double> engine::Object::get_position() const {
    return std::pair{this->x, this->y};
}

void engine::Object::set_position(double new_x, double new_y) {
    this->x = new_x;
    this->y = new_y;
}

sf::Sprite engine::Object::get_frame() const {
    return this->sprite;
}


