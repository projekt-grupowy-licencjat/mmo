#include "controlmanager.h"

void engine::events::ControlManager::execute(sf::Event& event) {
    for (const auto& object : this->controllable_objects) {
        object->execute_actions(event);
    }
}
