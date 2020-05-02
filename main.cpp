//
//  main.cpp
//  RTSGame
//
//  Created by Paweł Janusz on 28/04/2020.
//  Copyright © 2020 Paweł Janusz. All rights reserved.
//
#include "game.h"
#include "game_state_start.h"

#include <iostream>

int main()
{
    Game game;
    
    game.pushState(new GameStateStart(&game));
    game.gameLoop();
    return 0;
}
