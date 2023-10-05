#include "object.h"

engine::Object::Object(double x, double y, long id) {
    this->id = id;
    this->x = x;
    this->y = y;
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
