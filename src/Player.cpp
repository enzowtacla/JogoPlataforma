#include "../Entities/Characters/Player.h"

using namespace Entities;
using namespace Characters;

Player::Player(sf::Vector2f position, sf::Vector2f size, const bool player1): Entity(position, sf::Vector2f(PLAYER_SIZE_X, PLAYER_SIZE_Y), ID::player), player1(player1)
{

}

Player::~Player()
{

}

void Player::update(float dt)
{

}

void Player::initialize()
{

}