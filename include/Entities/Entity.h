#pragma once

#include "SFML/Graphics.hpp"

namespace Entities
{
    enum ID 
    {
        empty = 0,
        player
    };

    class Entity
    {
    private:
        sf::Vector2f position;
        sf::Vector2f size;
        ID id;

    public:
        Entity(sf::Vector2f position, sf::Vector2f size, ID id = empty);
        ~Entity();
        void setPosition();
        sf::Vector2f getPosition() const;
        sf::Vector2f getSize() const;
        ID getID() const;
        virtual void render();
        virtual void update(float dt) = 0;
        virtual void initialize() = 0;
    };
}