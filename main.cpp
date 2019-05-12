/* 
 * File:   main.cpp
 * Author: iyad
 *
 * Created on February 18, 2019, 11:53 AM
 */

#include <iostream>
#include <unistd.h>
#include "GameWin.h"
#include "Text.h"
#include "Constants.h"

int main()
{
    bool collision = false;
    int usr_score = 0;
    int cpu_score = 0;
    side corner_hit;
    
    GameWin main_win("Pong"); //Creates window 500 by 500
    
    while (main_win.isOpen()) //Game Loop
    {
            sf::Event event;
            while (main_win.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    main_win.close();

            }


        if(main_win.hasFocus()){ //As long as window is focused
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) 
                        main_win.usr_rak.move_up();

                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                        main_win.usr_rak.move_down();        

        }    
            
        corner_hit = main_win.cpu_ball.move(); //Moves being mindful of collisions
        
        if(main_win.who_wins(corner_hit) > 0){
            
            if(main_win.who_wins(corner_hit) == 1){
                main_win.cpu_scoreboard.increment_score(); 
            main_win.reset_game();
            }else{
                main_win.usr_scoreboard.increment_score();
                main_win.reset_game();
            }
        }
        
        main_win.cpu_rak.move_to(main_win.cpu_ball); //Tries to get to y position of ball at a constant speed
        
        main_win.clear(sf::Color::Black); 
        main_win.draw(main_win.usr_rak.get_sprite());
        main_win.draw(main_win.cpu_rak.get_sprite());
        main_win.draw(main_win.cpu_ball.get_sprite());
        main_win.draw(main_win.usr_scoreboard.get_text());
        main_win.draw(main_win.cpu_scoreboard.get_text());
        main_win.display();
        if(main_win.is_game_reset()){
            sleep(5);
            main_win.set_reset(false);
        }
    }

    return 0;
}

