#ifndef MMO_EVENT_MANAGER_H
#define MMO_EVENT_MANAGER_H

#include <vector>
#include "engine/event/action/action.h"

namespace engine {
    class EventManager {
        void execute_actions();
    private:
        std::vector<std::pair<bool, engine::Action>> actions;
    };
}

#endif //MMO_EVENT_MANAGER_H
