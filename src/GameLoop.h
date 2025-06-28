#ifndef GAMELOOP_H
#define GAMELOOP_H

#include <string>

class GameLoop {
public:
    void start(std::string player1, std::string player2);
    void executeAction(const std::string& action);
};

#endif // GAMELOOP_H
