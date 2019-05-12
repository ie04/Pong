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
 * File:   Score.cpp
 * Author: ie04
 * 
 * Created on May 10, 2019, 7:17 PM
 */

#include "Score.h"

Score::Score(std::string nscored, int xpos, int ypos, int nscore_amount) : scored(nscored), score_amount(nscore_amount) {
    this->update_content(scored + ": " + std::to_string(score_amount));
    this->set_position(xpos, ypos);
}

void Score::update_score(int score) {
    score_amount = score;
    this->update_content(scored + ": " + std::to_string(score_amount));
}

void Score::increment_score(){
    update_score(score_amount+1);
}