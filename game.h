//
//  game.h
//  RTSGame
//
//  Created by Paweł Janusz on 28/04/2020.
//  Copyright © 2020 Paweł Janusz. All rights reserved.
//

#ifndef game_h
#define game_h

#include <stack>

#include <SFML/Graphics.hpp>

class GameState;

class Game
{
    public:
    std::stack<GameState*> states;//stos wskaźników
    sf::RenderWindow window;
    
    void pushState(GameState* state);
    void popState();
    void changeState(GameState* state);
    
    GameState* peekState();// funkcja która zwraca wskaźnik do obiektu typu GameState
    
    void gameLoop();
    
    Game();
    
    ~Game();
    
    
};

#endif /* game_h */
