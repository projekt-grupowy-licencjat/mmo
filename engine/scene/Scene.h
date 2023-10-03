#ifndef MMO_SCENE_H
#define MMO_SCENE_H

#include <utility>
#include <vector>
#include "engine/object/object.h"

class Scene {
public:
    Scene() = default;

    explicit Scene(std::vector<Object> sceneItems) {
        this->sceneItems = std::move(sceneItems);
    }
private:
    std::vector<Object> sceneItems;
};

#endif //MMO_SCENE_H
