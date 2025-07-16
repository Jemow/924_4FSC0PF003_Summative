//
// Created by jimoa on 16.07.2025.
//

#include "game_texture_manager.h"
#include <SFML/Graphics/Texture.hpp>
#include "game_constants.h"
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;


namespace texture_manager
{
    namespace
    {
        std::vector<sf::Texture> textures_;
    }

    void Load()
    {
        for (const auto & entry : fs::directory_iterator(constants::kTextureFolderPath)){
            sf::Texture texture;

            if (!texture.loadFromFile(entry.path()))
            {
                std::cout << "Failed to load texture " << entry.path() << std::endl;
                continue;
            }

            textures_.push_back(texture);
        }
    }

    int32_t GetSize(){
        return static_cast<int32_t>(textures_.size());
    }

    sf::Texture GetTexture(const int index)
    {
        return textures_[index];
    }

}
