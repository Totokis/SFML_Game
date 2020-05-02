//
//  game_state_start.h
//  RTSGame
//
//  Created by Paweł Janusz on 29/04/2020.
//  Copyright © 2020 Paweł Janusz. All rights reserved.
//

#ifndef game_state_start_h
#define game_state_start_h

#include <SFML/Graphics.hpp>

#include "game_state.h"

class GameStateStart: public GameState
{
    private:
    sf::View view;
    
    void loadgame();
    
    public:
    virtual void draw(const float dt);
    virtual void update(const float dt);
    virtual void handleInput();
    GameStateStart(Game* game);
    
};


#endif /* game_state_start_h */
