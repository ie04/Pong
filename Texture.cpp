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
 * File:   Texture.cpp
 * Author: ie04
 * 
 * Created on February 23, 2019, 3:53 PM
 */

#include "Texture.h"

Texture::Texture(std::string image_name, bool smooth) {
    if(!texture.loadFromFile(image_name)) {
        std::cout << "Error: Failed to load texture resource" << std::endl;
    }
    texture.setSmooth(smooth);
}


