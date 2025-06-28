#include "GameLoop.h"
#include <iostream>

void GameLoop::start(std::string player1, std::string player2) {
    std::cout << "Game setup complete. Let's begin!" << std::endl;
    
    int terrorLevel = 0;
    bool gameRunning = true;

    while (gameRunning) {
        std::cout << "Current Terror Level: " << terrorLevel << std::endl;
        std::cout << player1 << "'s Turn - Choose Action: (move, guide, attack)\n";
        
        std::string action;
        std::cin >> action;

        if (action == "quit") {
   
         gameRunning = false;
        } else {
            executeAction(action);
        }

        terrorLevel++;
        if (terrorLevel >= 5) {
            std::cout << "Terror level maxed out! GAME OVER." << std::endl;
            break;
        }
    }
}

void GameLoop::executeAction(const std::string& action) {
    if (action == "move") {
        std::cout << "You move to a new location." << std::endl;
    } else if (action == "guide") {
        std::cout << "You guide a villager to safety." << std::endl;
    } else if (action == "attack") {
        std::cout << "You engage in battle with a monster!" << std::endl;
    } else {
        std::cout << "Invalid action. Try again!" << std::endl;
    }
}
