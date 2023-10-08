#include <iostream>
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
        engine::object::load_texture(idle_texture, properties.getIdleTexturePath());
    if (!properties.getAttackTexturePath().empty())
        engine::object::load_texture(fight_texture, properties.getAttackTexturePath());
    if (!properties.getMovementTexturePath().empty())
        engine::object::load_texture(move_texture, properties.getMovementTexturePath());

    this->idle_texture = idle_texture;
    this->fight_texture = fight_texture;
    this->move_texture = move_texture;

    sprite = new sf::Sprite();
    this->sprite->setTexture(this->idle_texture);
    this->sprite->setTextureRect(sf::IntRect(0,0, tile_size, tile_size));
}

void engine::Object::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    // Refactor it when refactoring whole movement with speed etc
    this->sprite->setPosition(x, y);
    target.draw(*sprite);
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
    return *sprite;
}

// moving rect
void engine::Object::next_frame() {
    engine::object::AnimationState state =  animation_state;
    int new_x;
    int new_y;
    if (state == engine::object::AnimationState::IDLE) {
        int current_x = this->current_frame * this->tile_size;
        int max_x = this->idle_texture.getSize().x;
        if (current_x + this->tile_size > max_x) this->current_frame = 0;
        new_x = this->current_frame * this->tile_size;
        new_y = this->tile_size * state;
        this->current_frame++;
    }
    this->sprite->setTextureRect(sf::IntRect(new_x, new_y, this->tile_size, this->tile_size));
}

void engine::Object::set_animation_state(engine::object::AnimationState animation_state) {
    this->animation_state = animation_state;
}
