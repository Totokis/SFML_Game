//
//  game_state.h
//  RTSGame
//
//  Created by Paweł Janusz on 28/04/2020.
//  Copyright © 2020 Paweł Janusz. All rights reserved.
//

#ifndef game_state_h
#define game_state_h

#include "game.h"

class GameState
{
    public:
    
    Game* game;
    
    virtual void draw(const float dt ) = 0;
    virtual void update(const float dt ) = 0;
    virtual void handleInput() = 0;
    
    
};


#endif /* game_state_h */
