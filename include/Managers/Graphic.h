#pragma once 

#include "SFML/Graphics.hpp"

namespace Managers
{
    class Graphic
    {
    private:
        sf::RenderWindow* window;
        sf::View view;
        sf::Clock clock;
        static float dt;

        static Managers::Graphic* pGraphic;
        Graphic();

    public:
        ~Graphic();
        static Graphic* getGraphic();
        void render(sf::RectangleShape* body);
        void display();
        void clear();
        bool isWindowOpen() const;
        void closeWindow();
        sf::Vector2u getWindowSize() const;
        void centerView(sf::Vector2f pos);
        void updateDeltaTime();
    };
}