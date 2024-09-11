#include "../Entities/Entity.h"

using namespace Entities;

Entity::Entity(sf::Vector2f position, sf::Vector2f size, ID id): id(id), position(position), size(size), body(sf::RectangleShape(size)), pGraphic(pGraphic->getGraphic())
{
    body.setPosition(position);
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

sf::RectangleShape Entity::getBody() const
{
    return body;
}

void Entity::render()
{
    pGraphic->render(&body);
}