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
 * File:   Racket.h
 * Author: ie04
 *
 * Created on February 23, 2019, 11:44 AM
 */

#ifndef RACKET_H
#define RACKET_H

#include <SFML/Graphics.hpp>
#include "Sprite.h"
#include "Texture.h"
#include "Ball.h"
class Racket : public Sprite {
public:
    Racket(sf::Window&, int xpos, int ypos=0, int speed=2);
    Racket(sf::Window&, std::string image_name="racket.png", bool smooth=false, int scale=5);
    void move_up();
    void move_down();
    void move_to(Ball& ball);
   
protected:
    int speed;
};

#endif /* RACKET_H */

