//
// Created by jimoa on 16.07.2025.
//

#ifndef GAME_TEXTURE_MANAGER_H
#define GAME_TEXTURE_MANAGER_H
#include <cstdint>
#include <SFML/Graphics/Texture.hpp>

namespace texture_manager
{
    void Load();
    int32_t GetSize();
    sf::Texture& GetTexture(int index);
}

#endif //GAME_TEXTURE_MANAGER_H
