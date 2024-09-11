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
clock(), textureMap()
{
    font = nullptr;
}

Graphic::~Graphic()
{
    std::map<const char*, sf::Texture*>::iterator it;
    for(it = textureMap.begin(); it != textureMap.end(); it++){
        delete(it->second);
    }
    delete window;
}

void Graphic::render(sf::RectangleShape* body)
{
    window->draw(*body);
}

void Graphic::render(sf::Text* text)
{
    window->draw(*text);
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

void Graphic::closeWindow()
{
    window->close();
}

void Graphic::handleWindowResize()
{
    float aspectRatio = float(window->getSize().x / float(window->getSize().y));
    view.setSize(sf::Vector2f(HEIGHT * aspectRatio, HEIGHT));
    window->setView(view);
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

sf::Texture* Graphic::loadTexture(const char* path)
{
    std::map<const char*, sf::Texture*>::iterator it = textureMap.begin();
    while(it != textureMap.end()){
        if(!strcmp(it->first, path))
            return it->second;
        it++;
    }
}

sf::Text* Graphic::getFont()
{
    return font;
}

void Graphic::updateDeltaTime()
{
    dt = clock.getElapsedTime().asSeconds();
    clock.restart();
}