#ifndef MMO_SCENE_H
#define MMO_SCENE_H

#include <utility>
#include <vector>
#include "engine/object/object.h"

class Scene {
public:
    Scene() = default;
    ~Scene() {
        clearItems();
    }
    // Adds items to Object vector
    void addItem(Object * item);
    void clearItems();
    void removeItem(long id);
private:
    std::vector<Object *> sceneItems;
};

#endif //MMO_SCENE_H
