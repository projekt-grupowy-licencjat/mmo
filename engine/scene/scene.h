#ifndef MMO_SCENE_H
#define MMO_SCENE_H

#include <utility>
#include <vector>
#include "engine/object/object.h"

class Scene {
public:
    Scene() = default;
    // Adds items to Object vector
    void addItem(Object * item);
private:
    std::vector<Object *> sceneItems;
};

#endif //MMO_SCENE_H
