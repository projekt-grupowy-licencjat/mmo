#ifndef MMO_ITEM_H
#define MMO_ITEM_H

#include <SFML/Graphics.hpp>
#include "object.h"

namespace engine {
    // TODO: later add handling animations
    // TODO: maybe move some of that stuff to Object as protected?
    // Class containing declaration for all non-collidable objects e.g pick up weapon etc.
    class Item : public Object {
    public:
        Item(double x, double y, long id);
        Item(double x, double y, long id, const sf::Sprite& sprite);
        void set_sprite(sf::Sprite& sprite);
    private:
        // TODO: Note that sprite will be the board of frames for animation purposes
        sf::Sprite sprite;
        void draw (sf::RenderTarget& target, sf::RenderStates states) const override;
    };
}

#endif //MMO_ITEM_H
