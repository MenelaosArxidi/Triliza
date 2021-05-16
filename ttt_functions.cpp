#include <iostream>
#include <vector>

void welcome() {

    std::cout << "=========================================\n";
    std::cout << "Welcome to Tic-Tac-Toe! (or else Triliza)\n";
    std::cout << "=========================================\n\n";

}

int main_menu() {

    int menu = 6846;    

    while (menu != 1 && menu != 2) {
        
        std::cout << " Start (type '1')\n Exit (type '2')\n\nType here: ";
        std::cin >> menu;

    }

    return menu;

}





void display(char a[9]) {
 
    std::cout << "\n";
    std::cout << "   a     b     c\n";
    std::cout << "      |     |     \n";
    std::cout << "1  " << a[0] << "  |  " << a[1] << "  |  " << a[2] << "  \n";
    std::cout << " _____|_____|_____\n";
    std::cout << "      |     |     \n";
    std::cout << "2  " << a[3] << "  |  " << a[4] << "  |  " << a[5] << "  \n";
    std::cout << " _____|_____|_____\n";
    std::cout << "      |     |     \n";
    std::cout << "3  " << a[6] << "  |  " << a[7] << "  |  " << a[8] << "  \n";
    std::cout << "      |     |     \n";
    std::cout << "\n";

}

bool win(char a[9]) {

    if ((a[0] == a[1] && a[0] == a[2] && a[0] != ' ') || (a[0] == a[4] && a[0] == a[8] && a[0] != ' ') || (a[0] == a[3] && a[0] == a[6] && a[0] != ' ') || (a[3] == a[4] && a[3] == a[5] && a[3] != ' ') || (a[6] == a[7] && a[6] == a[8]&& a[6] != ' ') || (a[6] == a[4] && a[6] == a[2] && a[6] != ' ') || (a[1] == a[4] && a[1] == a[7] && a[1] != ' ') || (a[2] == a[5] && a[2] == a[8] && a[2] != ' ')) {
        return true;
    } else {
        return false;
    }

}






int game_y(std::string winner) {
    int y_index = 654;
    char Cy_index;
    while (Cy_index != 'a' && Cy_index != 'b' && Cy_index != 'c') {
        std::cout << winner << " is your turn, pick (a, b or c): ";
        std::cin >> Cy_index;
        switch(Cy_index) {
            case 'a' :
                y_index = 0;
                break;
            case 'b' :
                y_index = 1;
                break;
            case 'c' :
                y_index = 2;
                break;
            default :
                std::cout << "Try again.\n";
                break;
        }
    }
    return y_index;
}
int game_x(std::string winner) {
    int x_index = 6513;
    int out_x_index;
    while (x_index != 1 && x_index != 2 && x_index != 3) {
        std::cout << "Now pick (1, 2 or 3): ";
        std::cin >> x_index;
        if (x_index != 0 && x_index != 1 && x_index != 2) {
            std::cout << "Try again.\n";
        }
    }
    switch(x_index) {
        case 1 :
            out_x_index = 0;
            break;
        case 2 :
            out_x_index = 3;
            break;
        case 3 :
            out_x_index = 6;
            break;
    }

    return out_x_index;
}









