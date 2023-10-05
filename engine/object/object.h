#ifndef MMO_OBJECT_H
#define MMO_OBJECT_H

#include <utility>
#include <memory>
#include <SFML/Graphics.hpp>
#include "engine/object/properties/properties.h"

namespace engine {
// Abstract class for every game object to inherit
    class Object : public sf::Drawable {
    public:
        Object(long id, const engine::object::Properties& properties);

        // nodiscard gives us warning if value unused
        [[nodiscard]] long get_id() const;

        [[nodiscard]] double get_x() const;

        [[nodiscard]] double get_y() const;

        [[nodiscard]] std::pair<double, double> get_position() const;

        void set_position(double new_x, double new_y);

        // for now it simply returns whole image
        sf::Sprite get_frame() const;
    private:
        double x, y;
        long id;
        sf::Sprite sprite;
        // TODO: add current animation enum deciding which animation to do
    };

}
#endif //MMO_OBJECT_H
