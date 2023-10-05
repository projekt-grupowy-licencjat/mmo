#ifndef MMO_PROPERTIES_H
#define MMO_PROPERTIES_H

#include <string>
#include <utility>

namespace engine::object {
    class Properties {
    public:
        Properties(double startX, double startY, std::string idleTexturePath,
                   std::string movementTexturePath, std::string attackTexturePath) : start_x(startX),
                                                                                                   start_y(startY),
                                                                                                   idle_texture_path(std::move(
                                                                                                           idleTexturePath)),
                                                                                                   movement_texture_path(std::move(
                                                                                                           movementTexturePath)),
                                                                                                   attack_texture_path(std::move(
                                                                                                           attackTexturePath)) {}

        [[nodiscard]] double getStartX() const {
            return start_x;
        }

        void setStartX(double startX) {
            start_x = startX;
        }

        [[nodiscard]] double getStartY() const {
            return start_y;
        }

        void setStartY(double startY) {
            start_y = startY;
        }

        [[nodiscard]] const std::string &getIdleTexturePath() const {
            return idle_texture_path;
        }

        void setIdleTexturePath(const std::string &idleTexturePath) {
            idle_texture_path = idleTexturePath;
        }

        [[nodiscard]] const std::string &getMovementTexturePath() const {
            return movement_texture_path;
        }

        void setMovementTexturePath(const std::string &movementTexturePath) {
            movement_texture_path = movementTexturePath;
        }

        [[nodiscard]] const std::string &getAttackTexturePath() const {
            return attack_texture_path;
        }

        void setAttackTexturePath(const std::string &attackTexturePath) {
            attack_texture_path = attackTexturePath;
        }

    private:
        double start_x;
        double start_y;
        std::string idle_texture_path;
        std::string movement_texture_path;
        std::string attack_texture_path;
    };
}

#endif //MMO_PROPERTIES_H
