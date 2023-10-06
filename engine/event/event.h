#ifndef MMO_EVENT_H
#define MMO_EVENT_H

#include "engine/object/object.h"

namespace engine {
    class Event {
    public:
        explicit Event(long id);
        [[nodiscard]] long get_object_id() const;
        virtual void execute_event(engine::Object &object) = 0;
    private:
        long object_id;
    };
}

#endif //MMO_EVENT_H
