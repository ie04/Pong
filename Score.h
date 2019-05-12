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
 * File:   Score.h
 * Author: ie04
 *
 * Created on May 10, 2019, 7:17 PM
 */

#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <string>
#include "Text.h"
class Score : public Text{
public:
    Score(std::string nscored, int xpos, int ypos, int nscore_amount = 0);
    void update_score(int);
    void increment_score();
    
private:
    std::string scored;
    int score_amount;
    
};

#endif /* SCORE_H */

