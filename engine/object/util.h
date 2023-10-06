#include "SFML/Graphics/Texture.hpp"
#include "engine/object/errors/texture.h"

namespace engine::object {
    // x and y mean from what point of the image to start
    void load_texture(sf::Texture& texture, std::string path) {
        if (!texture.loadFromFile(path)) {
            throw engine::object::TextureLoadFailed();
        }
    }
}