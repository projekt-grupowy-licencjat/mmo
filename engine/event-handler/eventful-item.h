#ifndef MMO_EVENTFUL_ITEM_H
#define MMO_EVENTFUL_ITEM_H

#include <memory>
#include <functional>
#include "engine/object/object.h"

class EventfulItem {
private:
    std::shared_ptr<Object> object;
    std::function<void(int)> handler; // TODO: change the int
};

#endif //MMO_EVENTFUL_ITEM_H
