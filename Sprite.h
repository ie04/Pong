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
 * File:   Sprite.h
 * Author: ie04
 *
 * Created on February 25, 2019, 9:34 PM
 */

#ifndef SPRITE_H
#define SPRITE_H
#include <SFML/Graphics/Sprite.hpp>
#include "Texture.h"

class Sprite {
public:
    Sprite(sf::Window&, std::string, bool smooth=false, float scale=1, float xpos=0, float ypos=0);
    float get_ypos() const { return y_pos; }
    void set_ypos(float y_pos) { this->y_pos = y_pos; }
    
    float get_xpos() const { return x_pos; }
    void set_xpos(int x_pos) { this->x_pos = x_pos; }
    
    void set_position(float x, float y);
    
    void move_y(float pos);
    void move_x(float pos);
    
    sf::Sprite get_sprite() const { return sprite; }
    sf::Sprite& set_sprite() { return sprite; } 
    
    Texture get_tex() const { return texture; }
    Texture& set_tex() { return texture; }
    
    sf::Window& get_win() const { return window; }
    
protected:
    float y_pos;
    float x_pos;
    
private:
    sf::Sprite sprite;
    sf::Window& window;
    Texture texture;

};

#endif /* SPRITE_H */

