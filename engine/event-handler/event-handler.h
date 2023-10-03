#ifndef MMO_EVENT_HANDLER_H
#define MMO_EVENT_HANDLER_H

#include <vector>
#include <memory>
#include "eventful-item.h"

/* Class which handles all player events, which includes character movement, menu buttons and everything else.
  Important: it should contain only things that can be used at the moment, for some specific situations
  like opened equipment consider having two handlers, one 'more important' than other. */
class EventHandler {
public:
    EventHandler() = default;
private:
    std::vector<std::unique_ptr<EventfulItem>> items;
};

#endif //MMO_EVENT_HANDLER_H
