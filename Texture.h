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
 * File:   Texture.h
 * Author: ie04
 *
 * Created on February 23, 2019, 3:53 PM
 */

#ifndef TEXTURE_H
#define TEXTURE_H
#include <iostream>
#include <SFML/Graphics.hpp>
class Texture {
public:
    Texture(std::string, bool);
    ~Texture() {}
    sf::Texture get_tex() { return texture; }
    sf::Texture& set_tex() { return texture; }
private:
    sf::Texture texture;
};

#endif /* TEXTURE_H */

