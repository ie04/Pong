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
 * File:   gameWin.cpp
 * Author: ie04
 * 
 * Created on May 9, 2019, 7:36 PM
 */
#include <stdlib.h>
#include <unistd.h> 
#include "GameWin.h"

GameWin::GameWin(std::string win_name, int height, int width) : sf::RenderWindow(sf::VideoMode(height, width), win_name), usr_rak(*this,0,250), 
cpu_rak(*this, 460, 250), cpu_ball(*this, usr_rak, cpu_rak), usr_scoreboard("User",0,0), cpu_scoreboard("CPU",400,0), game_reset(false)

{
    this->setVerticalSyncEnabled(true);
}

int GameWin::who_wins(side which){
    switch(which){
        case LEFT:
            return 1;
        case RIGHT:
            return 2;
        default:
            return 0;
    }
    
}

void GameWin::reset_game(){
    usr_rak.set_position(0,250);
    cpu_rak.set_position(460,250);
    cpu_rak.set_collide(false);
    cpu_ball.set_position(this->getSize().x/2, this->getSize().y/2);
    this->game_reset = true;
}

bool GameWin::is_game_reset(){
    if(game_reset)
        return true;
    else
        return false;
}

void GameWin::set_reset(bool val) {
    game_reset = val;
}
