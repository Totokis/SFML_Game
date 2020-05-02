//
//  game_state_editor.h
//  RTSGame
//
//  Created by Paweł Janusz on 01/05/2020.
//  Copyright © 2020 Paweł Janusz. All rights reserved.
//

#ifndef game_state_editor_h
#define game_state_editor_h
#include <SFML/Graphics.hpp>
#include "game_state.h"


class GameStateEditor: public GameState
{
    private:
    
    sf::View gameView;
    sf::View guiView;
    
    public:
    
    virtual void draw(const float dt);
    virtual void update(const float dt);
    virtual void handleInput();
    
    GameStateEditor(Game* game);
    
};

#endif /* game_state_editor_h */
