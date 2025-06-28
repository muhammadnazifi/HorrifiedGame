#include "../src/GameLoop.h"
#include <cassert>
#include <iostream>

void test_game_execution() {
    GameLoop game;
    game.start("Alice", "Bob");

    assert(game.isRunning() == false);  // Should be false after game ends
    assert(game.getTerrorLevel() >= 5); // Terror level should be at max
}

int main() {
    test_game_execution();
    std::cout << "✅ Game execution test passed!\n";
    return 0;
}
