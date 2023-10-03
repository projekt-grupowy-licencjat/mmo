#ifndef MMO_SCENE_H
#define MMO_SCENE_H

#include <utility>
#include <vector>
#include <memory>
#include "engine/object/object.h"

namespace engine {
    class Scene {
    public:
        Scene() = default;

        ~Scene() {
            clearItems();
        }

        // Adds items to Object vector
        void addItem(std::shared_ptr<Object> item);

        void clearItems();

        void removeItem(long id);

        std::shared_ptr<Object> getObjectById(long id);

        std::vector<std::shared_ptr<Object>> getAllItems();
    private:
        std::vector<std::shared_ptr<Object>> sceneItems;
    };
}
#endif //MMO_SCENE_H
