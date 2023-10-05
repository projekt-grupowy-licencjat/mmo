#include "SFML/Graphics/Texture.hpp"
#include "engine/object/errors/texture.h"

namespace engine::object {
    // x and y mean from what point of the image to start
    void load_texture(sf::Texture& texture, std::string path, int x, int y, int tile_size) {
        if (!texture.loadFromFile(path, sf::IntRect(x, y, tile_size, tile_size))) {
            throw engine::object::TextureLoadFailed();
        }
    }
}