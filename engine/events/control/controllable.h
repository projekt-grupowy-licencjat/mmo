#ifndef MMO_CONTROLLABLE_H
#define MMO_CONTROLLABLE_H

#include "SFML/Window/Event.hpp"

namespace engine::events {
    class Controllable {
    public:
        virtual void execute_actions(sf::Event &event) = 0;
    };
}

#endif //MMO_CONTROLLABLE_H
