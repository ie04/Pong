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
 * File:   Text.cpp
 * Author: ie04
 * 
 * Created on March 19, 2019, 2:23 PM
 */

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

#include "Text.h"

Text::Text(std::string nFont, int chSize) {
    if(!font.loadFromFile(nFont)){
        std::cout << "Error: Could not load font" << std::endl;
    }
    text.setFont(font);
    text.setCharacterSize(chSize);
    text.setFillColor(sf::Color::White);
}


