#include "object.h"
#include "engine/object/util.h"

engine::Object::Object(long id, const engine::object::Properties& properties) {
    this->id = id;
    this->x = properties.getStartX();
    this->y = properties.getStartY();
    this->tile_size = properties.getTileSize();
    this->current_frame = 0;
    this->animation_state = engine::object::AnimationState::IDLE;

    sf::Texture idle_texture;
    sf::Texture fight_texture;
    sf::Texture move_texture;
    if (!properties.getIdleTexturePath().empty())
        engine::object::load_texture(idle_texture, properties.getIdleTexturePath(), 0, 0, properties.getTileSize());
    if (!properties.getAttackTexturePath().empty())
        engine::object::load_texture(fight_texture, properties.getAttackTexturePath(), 0, 0, properties.getTileSize());
    if (!properties.getMovementTexturePath().empty())
        engine::object::load_texture(move_texture, properties.getMovementTexturePath(), 0, 0, properties.getTileSize());

    this->idle_texture = idle_texture;
    this->fight_texture = fight_texture;
    this->move_texture = move_texture;

    this->sprite.setTexture(this->idle_texture);
}

void engine::Object::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(this->sprite);
};

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

// moving rect
void engine::Object::next_frame() {

}
