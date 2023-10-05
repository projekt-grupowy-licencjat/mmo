#ifndef MMO_OBJECT_H
#define MMO_OBJECT_H

#include <utility>
#include <memory>
#include <SFML/Graphics.hpp>
#include "engine/object/properties/properties.h"
#include "engine/object/animation/animation-state.h"

namespace engine {
// Abstract class for every game object to inherit
// TODO: Make animations more safe as the path may not be given
// TODO: maybe move animation to another object and make it work inside here?
    class Object : public sf::Drawable {
    public:
        Object(long id, const engine::object::Properties& properties);

        virtual ~Object() = 0;

        // nodiscard gives us warning if value unused
        [[nodiscard]] long get_id() const;

        [[nodiscard]] double get_x() const;

        [[nodiscard]] double get_y() const;

        [[nodiscard]] std::pair<double, double> get_position() const;

        void set_position(double new_x, double new_y);

        sf::Sprite get_frame() const;

        // TODO: maybe every few frames? it depends
        void next_frame();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    private:
        double x, y;
        long id;
        int tile_size;
        int current_frame;
        sf::Texture idle_texture;
        sf::Texture fight_texture;
        sf::Texture move_texture;
        sf::Sprite sprite;
        engine::object::AnimationState animation_state;
    };

}
#endif //MMO_OBJECT_H
