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
 * File:   Ball.cpp
 * Author: ie04
 * 
 * Created on February 25, 2019, 9:31 PM
 */
#include <iostream>
#include "Ball.h"
Ball::Ball(sf::Window& window): Sprite(window, "ball.png", false), x_speed(2), y_speed(2) {
    x_pos = window.getSize().x/2; //Center of window
    y_pos = window.getSize().y/2;
    set_position(x_pos, y_pos); //Updates sprite position
}

corner Ball::move(bool collision){
    corner corner_hit = NONE;
    
    if(this->get_xpos() < 0){
        corner_hit = LEFT;
        x_speed = -x_speed;
    }
    if(this->get_xpos() + this->get_sprite().getLocalBounds().width >= get_win().getSize().x){ //Left or right extremes
        corner_hit = RIGHT;
        x_speed = -x_speed;
    }
    if(this->get_ypos() < 0){
        corner_hit = TOP;
        y_speed = -y_speed;
    }
    if(this->get_ypos() + this->get_sprite().getLocalBounds().height >= get_win().getSize().y){ //Top or bottom extremes
        corner_hit = BOTTOM;
        y_speed = -y_speed;  
    }
    if(collision){
        x_speed = -x_speed;
        this->user_collided = true;
    }
    
    x_pos+=x_speed;
    y_pos+=y_speed;
    
    this->move_x(x_pos);  
    this->move_y(y_pos);
    
    std::cout << "Xspeed is at " << x_speed << std::endl;
    std::cout << "Yspeed is at " << y_speed << std::endl;
    
    return corner_hit;
}



