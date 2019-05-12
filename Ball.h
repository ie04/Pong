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
 * File:   Ball.h
 * Author: ie04
 *
 * Created on February 25, 2019, 9:31 PM
 */

#ifndef BALL_H
#define BALL_H
#include "Sprite.h"
#include "Constants.h"
class Ball: public Sprite{
public:
    Ball(sf::Window&);
    ~Ball(){}
    corner move(bool);
private:
    int x_speed;
    int y_speed;
    int speed; 
    bool user_collided;
};

#endif /* BALL_H */

