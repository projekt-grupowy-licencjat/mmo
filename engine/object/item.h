#ifndef MMO_ITEM_H
#define MMO_ITEM_H

#include "object.h"

namespace engine {

    // Class containing declaration for all non-collidable objects e.g pick up weapon etc.
    class Item : public Object {
    public:
        Item(double x, double y, long id);
        void draw(std::shared_ptr<sf::RenderTarget> target) override;
    };
}

#endif //MMO_ITEM_H
