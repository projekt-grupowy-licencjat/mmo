#include "item.h"

void engine::Item::draw(sf::RenderTarget &target, sf::RenderStates states) const {

}

engine::Item::Item(double x, double y, long id, const sf::Sprite &sprite) : Object(x, y, id){
    this->sprite = sprite;
}

void engine::Item::set_sprite(sf::Sprite &new_sprite) {
    this->sprite = new_sprite;
}

engine::Item::Item(double x, double y, long id) : Object(x, y, id) {

}
