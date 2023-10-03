#ifndef MMO_EVENT_HANDLER_H
#define MMO_EVENT_HANDLER_H

#include <vector>
#include "engine/object/object.h"

class EventHandler {
public:
    EventHandler() = default;
private:
    std::vector<Object *> eventfulItems;
};

#endif //MMO_EVENT_HANDLER_H
