#ifndef MMO_OBJECT_H
#define MMO_OBJECT_H

#include <utility>
#include <memory>
#include <SFML/Graphics.hpp>

namespace engine {
// Abstract class for every game object to inherit
    class Object {
    public:
        Object(double x, double y, long id);

//        virtual ~Object() = 0;

        [[nodiscard]] long get_id() const;

        [[nodiscard]] double get_x() const;

        [[nodiscard]] double get_y() const;

        [[nodiscard]] std::pair<double, double> get_position() const;

    private:
        double x, y;
        long id;
    };

}
#endif //MMO_OBJECT_H
