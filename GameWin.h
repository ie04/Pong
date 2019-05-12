/*
 * Copyright (C) 2019 ie04
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* 
 * File:   gameWin.h
 * Author: ie04
 *
 * Created on May 9, 2019, 7:36 PM
 */

#ifndef GAMEWIN_H
#define GAMEWIN_H
#include <SFML/Graphics.hpp>
#include <string>
#include "Constants.h"
#include "Racket.h"
#include "Ball.h"
#include "Score.h"
#include "Collision.h"
class GameWin : public sf::RenderWindow {
public:
    GameWin(std::string win_name, int height = WIN_HEIGHT, int width = WIN_WIDTH);
    bool sprites_collided(sf::Sprite, sf::Sprite);
    int who_wins(corner);
    void reset_game();
    
    Racket usr_rak;
    Racket cpu_rak;
    Ball cpu_ball;
    Score usr_scoreboard;
    Score cpu_scoreboard;
    
private:
};

#endif /* GAMEWIN_H */

