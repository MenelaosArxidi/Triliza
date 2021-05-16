#include <iostream>
#include <vector>
#include "ttt_function.h"

int main() {
    
    welcome();  
    while (main_menu() == 1) {
        
        char a[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        
        int x_index;
        int y_index;
        char Cy_index;

        bool condition = false;
        int rounds = 9;
        std::string winner;

        while (rounds > 0 && condition == false) {
            display(a);
            if (rounds % 2 != 0) {
                winner = "Player 1";
                y_index = game_y(winner);
                x_index = game_x(winner);
                a[y_index + x_index] = 'X';        
            } else {
                winner = "Player 2";
                y_index = game_y(winner);
                x_index = game_x(winner);
                a[y_index + x_index] = 'O';
        
            }

            condition = win(a);
            rounds--;

        }
        display(a);

        if (condition == true) {
            std::cout << winner << " you won!\n";
        } else {
            std::cout << "Its a tie.\n";
        }

        std::cout << "\n ... Back to main menu ... \n\n";

    }
    std::cout << "OK byeee!\n";    

}