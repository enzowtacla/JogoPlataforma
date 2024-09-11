#pragma once 

#include "SFML/Graphics.hpp"
#include <map>

namespace Managers
{
    class Graphic
    {
    private:
        sf::RenderWindow* window;
        sf::View view;
        std::map<const char*, sf::Texture*> textureMap;
        sf::Font* font;
        sf::Clock clock;
        static float dt;

        static Managers::Graphic* pGraphic;
        Graphic();

    public:
        ~Graphic();
        static Graphic* getGraphic();
        void render(sf::RectangleShape* body);
        void render(sf::Text* text);
        void display();
        void clear();
        bool isWindowOpen() const;
        void closeWindow();
        void handleWindowResize();
        sf::Vector2u getWindowSize() const;
        void centerView(sf::Vector2f pos);
        sf::Texture* loadTexture(const char* path);
        sf::Font* getFont();
        void updateDeltaTime();
    };
}