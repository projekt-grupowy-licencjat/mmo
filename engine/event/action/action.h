#ifndef MMO_ACTION_H
#define MMO_ACTION_H


#include "engine/object/object.h"

namespace engine {
// abstract class
// TODO: Create some ready made like onCollision, onNextFrame
    class Action {
    public:
        virtual void execute(engine::Object &object) = 0;
    };
}

#endif //MMO_ACTION_H
