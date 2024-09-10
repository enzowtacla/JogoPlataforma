#pragma once

#include "Entities/Characters/Player.h"
#include "Managers/Graphic.h"

class Game
{
private:
    Entities::Characters::Player p1;
    Managers::Graphic* pGraphic;

public:
    Game();
    ~Game();
    void exec();
};