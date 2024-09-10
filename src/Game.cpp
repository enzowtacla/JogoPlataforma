#include "Game.h"

Game::Game() : pGraphic(pGraphic->getGraphic())
{
    exec();
}

Game::~Game()
{

}

void Game::exec()
{
    while(pGraphic->isWindowOpen())
    {
        pGraphic->updateDeltaTime();
        pGraphic->clear();
        pGraphic->display();
    }
}