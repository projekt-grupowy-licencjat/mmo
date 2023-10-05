#ifndef MMO_TEXTURE_H
#define MMO_TEXTURE_H

#include <exception>

namespace engine::object {
    class TextureLoadFailed : public std::exception {
    public:
        char * what () {
            return "Texture failed to load";
        }
    };

}
#endif //MMO_TEXTURE_H
