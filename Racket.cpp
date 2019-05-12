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
 * File:   Racket.cpp
 * Author: ie04
 * 
 * Created on February 23, 2019, 11:44 AM
 */
#include <iostream>
#include "Racket.h"
#include "Ball.h"
#include "urand.h"
#include "Constants.h"
Racket::Racket(sf::Window& win, int xpos, int ypos, int n_speed): Sprite(win, "racket.png", false, 5, xpos, ypos), speed(n_speed) {
    this->set_position(xpos,ypos);
}
Racket::Racket(sf::Window& win, std::string image_name, bool smooth, int scale): Sprite(win, image_name, smooth, scale), speed(2) {}

void Racket::move_up(){ 
    if(this->get_ypos() > 0){
    y_pos-=speed;
    move_y(y_pos);
    }
}
void Racket::move_down(){
    if(this->get_ypos() + this->get_sprite().getLocalBounds().height + TITLE_HEIGHT <= this->get_win().getSize().y){
    y_pos+=speed;
    move_y(y_pos);
    }
    
}
void Racket::move_to(Ball& ball){
    if(ball.get_xpos() > urand::rand(0,200)){ //Racket "AI"
    if(this->y_pos < ball.get_ypos()){
        move_down();
    }
    else if(this->y_pos > ball.get_ypos()){
        move_up();
    }
    }
}