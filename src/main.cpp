#include <iostream>
#include "GameLoop.h"

int main() {
    std::cout << "Welcome to HORRIFIED GAME!" << std::endl;

    std::string player1, player2;
    std::cout << "Enter Player 1 name: ";
    std::cin >> player1;
    std::cout << "Enter Player 2 name: ";
    std::cin >> player2;


    int garlicTime1, garlicTime2;
    std::cout << player1 << ", enter hours since last garlic meal: ";
    std::cin >> garlicTime1;
    std::cout << player2 << ", enter hours since last garlic meal: ";
    std::cin >> garlicTime2;

    
    std::string firstPlayer = (garlicTime1 < garlicTime2) ? player1 : player2;
    std::cout << firstPlayer << " will start the game!\n" << std::endl;

    
    GameLoop game;
    game.start(player1, player2);
    
    return 0;
}
