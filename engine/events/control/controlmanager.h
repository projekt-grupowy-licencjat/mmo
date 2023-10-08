#ifndef MMO_CONTROLMANAGER_H
#define MMO_CONTROLMANAGER_H

#include <vector>
#include <memory>
#include "controllable.h"

namespace engine::events {
    class ControlManager {
    public:
        void execute(sf::Event& event);
    private:
        std::vector<std::shared_ptr<Controllable>> controllable_objects;
    };
}

#endif //MMO_CONTROLMANAGER_H
