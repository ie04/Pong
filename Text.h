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
 * File:   Text.h
 * Author: ie04
 *
 * Created on March 19, 2019, 2:23 PM
 */

#ifndef TEXT_H
#define TEXT_H
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
class Text {
public:
    Text(std::string nFont = "arial.ttf", int chSize = 24);
    ~Text(){}
    
    sf::Font& get_font(){ return font; }
    sf::Text& get_text(){ return text; }
    void update_content(std::string new_content){ text.setString(new_content); }
    void set_position(float x, float y){ text.setPosition(x,y); }
private:
    sf::Font font;
    sf::Text text;
    std::string content;
};

#endif /* TEXT_H */

