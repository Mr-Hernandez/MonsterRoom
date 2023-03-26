#ifndef TEXTURERESOURCEMANAGER_HPP
#define TEXTURERESOURCEMANAGER_HPP

#include <memory>
#include <SFML/Graphics.hpp>

class TextureResourceManager{
public:
	static TextureResourceManager& getInstance() {
        	static TextureResourceManager instance;
        	return instance;
	}
    

    	std::shared_ptr<sf::Texture> getTexture(const std::string& textureName) {
        	auto it = m_textureMap.find(textureName); // change texturemanager to some file name
        	if (it != m_textureMap.end()) {
            		return it->second;
        	} else {
           		 // load the texture from file and create a shared pointer to it
			std::string filepath = "Resources/Textures/" + textureName + "_texture.png";
			 auto texture = std::make_shared<sf::Texture>();
			 if (!texture->loadFromFile(filepath)) {
			    texture->loadFromFile("Resources/Textures/default_texture.png");
				    // handle error if texture could not be loaded
			}
			 m_textureMap[textureName] = texture;
			 return texture;
        	}
    }

private:
    std::map<std::string, std::shared_ptr<sf::Texture>> m_textureMap;

    TextureResourceManager() {}
    TextureResourceManager(const TextureResourceManager&) = delete;
    TextureResourceManager& operator=(const TextureResourceManager&) = delete;
};

#endif


