#pragma once

#include "../Entities/Entity.h"

#define PLAYER_SIZE_X 50.f
#define PLAYER_SIZE_Y 50.f

namespace Entities
{
    namespace Characters
    {
        class Player : public Entity
        {
        private:
            const bool player1;

        public:
            Player(sf::Vector2f position = sf::Vector2f(0.f, 0.f), sf::Vector2f size = sf::Vector2f(0.f, 0.f), const bool player1 = true);
            ~Player();
            void update(float dt);
            void initialize();
        };
    }
}