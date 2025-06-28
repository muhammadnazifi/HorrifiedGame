#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    std::string type;
    int power;

    Monster(std::string t, int p) : type(t), power(p) {}

    void attack();
};

#endif
