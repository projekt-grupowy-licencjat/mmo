#ifndef MMO_SCENE_H
#define MMO_SCENE_H

#include <utility>
#include <vector>
#include <memory>
#include "engine/object/object.h"

namespace engine {
    // as optimalization (if needed) maybe add sf::Drawable to this and
    class Scene {
    public:
        Scene() {};

        // TODO: Idk if needed
        ~Scene() {
            clear_items();
        }

        // Adds items to Object vector
        void add_item(Object* item);

        void clear_items();

        void remove_item(long id);

        Object* get_object_by_id(long id);

        std::vector<Object *> get_all_items();

    private:
        std::vector<Object*> scene_items;
    };
}
#endif //MMO_SCENE_H
