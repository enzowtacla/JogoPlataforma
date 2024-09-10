#include "../Entities/Entity.h"

using namespace Entities;

Entity::Entity(sf::Vector2f position, sf::Vector2f size, ID id): id(id), position(position), size(size)
{

}

Entity::~Entity()
{
    
}

sf::Vector2f Entity::getPosition() const
{
    return position;
}

sf::Vector2f Entity::getSize() const
{
    return size;
}

ID Entity::getID() const
{
    return id;
}

void Entity::render()
{

}