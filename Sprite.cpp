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
 * File:   Sprite.cpp
 * Author: ie04
 * 
 * Created on February 25, 2019, 9:34 PM
 */
#include "Sprite.h"

Sprite::Sprite(sf::Window& win, std::string image_name, bool smooth, float scale, float xpos, float ypos): texture(image_name, smooth), x_pos(xpos), y_pos(ypos), window(win) {
    sprite.setTexture(texture.set_tex());
    sprite.scale(sf::Vector2f(scale,scale));
    set_position(xpos,ypos);
}

void Sprite::move_x(float pos){
    x_pos = pos;
    set_position(x_pos, y_pos);
}
void Sprite::move_y(float pos){
    y_pos = pos;
    set_position(x_pos,y_pos);
}
void Sprite::set_position(float x_pos, float y_pos){
    this->x_pos = x_pos;
    this-> y_pos = y_pos;
    sprite.setPosition(x_pos,y_pos);
}