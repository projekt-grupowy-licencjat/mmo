#ifndef MMO_OBJECT_H
#define MMO_OBJECT_H

#include <utility>
#include <memory>
#include <SFML/Graphics.hpp>

namespace engine {
// Abstract class for every game object to inherit
// TODO: pub/sub system maybe with event-handler?
    class Object : public sf::Drawable {
    public:
        Object(double x, double y, long id);

        // nodiscard gives us warning if value unused
        [[nodiscard]] long get_id() const;

        [[nodiscard]] double get_x() const;

        [[nodiscard]] double get_y() const;

        [[nodiscard]] std::pair<double, double> get_position() const;

        void set_position(double new_x, double new_y);

    private:
        double x, y;
        long id;
    };

}
#endif //MMO_OBJECT_H
