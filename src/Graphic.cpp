#include "../Managers/Graphic.h"
#include <cstring>
#include <iostream>

using namespace Managers;

#define WIDTH 1280.f
#define HEIGHT 720.f
#define FRAME_RATE 100.f

Graphic* Graphic::pGraphic(nullptr);
float Graphic::dt(0);

Graphic* Graphic::getGraphic()
{
    if(!pGraphic){
        pGraphic = new Graphic();
    }
    return pGraphic;
}

Graphic::Graphic() : window(new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Game")), view(sf::Vector2f(WIDTH/2, HEIGHT/2), sf::Vector2f(WIDTH, HEIGHT)), 
clock()
{

}

Graphic::~Graphic()
{
    delete window;
}

void Graphic::render(sf::RectangleShape* body)
{
    window->draw(*body);
}

void Graphic::display()
{
    window->display();
}

void Graphic::clear()
{
    window->clear();
}

bool Graphic::isWindowOpen() const
{
    return (window->isOpen());
}

sf::Vector2u Graphic::getWindowSize() const
{
    return window->getSize();
}

void Graphic::centerView(sf::Vector2f pos)
{
    view.setCenter(sf::Vector2f(pos.x, pos.y));
    window->setView(view);
}

void Graphic::updateDeltaTime()
{
    dt = clock.getElapsedTime().asSeconds();
    clock.restart();
}