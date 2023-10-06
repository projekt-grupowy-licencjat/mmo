#ifndef MMO_EVENT_MANAGER_H
#define MMO_EVENT_MANAGER_H

#include <queue>
#include "engine/scene/scene.h"
#include "event.h"

namespace engine {
// TODO: applying events to objects from scene
// Class handling every event coming from user input and server signals
// TODO: Catch events in the main thread and send them to the thread where this works
    class EventManager {
    public:
        explicit EventManager(engine::Scene &scene);
//    void execute_events();

    private:
        std::queue<Event> event_queue;
        engine::Scene &scene;
    };
}

#endif //MMO_EVENT_MANAGER_H
