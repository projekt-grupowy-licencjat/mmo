#include "event.h"

long engine::Event::get_object_id() const {
    return this->object_id;
}

engine::Event::Event(long id) {
    this->object_id = id;
}
