//
//  game.cpp
//  RTSGame
//
//  Created by Paweł Janusz on 29/04/2020.
//  Copyright © 2020 Paweł Janusz. All rights reserved.
//

#include <stdio.h>

#include <stack>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "game.h"
#include "game_state.h"




void Game::pushState(GameState* state)
{
    this->states.push(state);
    
    return;
}


void Game::popState()
{
    delete this->states.top();
    this->states.pop();
    
    return;
}

void Game::changeState(GameState* state)
{
    if(!this->states.empty())
        popState();
    pushState(state);
    
    return;
}

GameState* Game::peekState()
{
    if(this->states.empty()) return nullptr;
    
    return this->states.top();
}

void Game::gameLoop()
{
    sf::Clock clock;
    
    while(this->window.isOpen())
    {
        sf::Time elapsed = clock.restart();
        float dt = elapsed.asSeconds();
        
        
        if(peekState()==nullptr) continue;//leci do końca pętli
        peekState()->handleInput();
        peekState()->update(dt);
        this->window.clear(sf::Color::Black);
        peekState()->draw(dt);
        this->window.display();
        
    }
}

Game::Game()
{
    this->window.create(sf::VideoMode(600,800), "City Builder");
    this->window.setFramerateLimit(60);
    
}

Game::~Game()
{
    while(!this->states.empty()) popState();
}
