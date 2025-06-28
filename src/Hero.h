#ifndef HERO_H
#define HERO_H

#include <string>

class Hero {
public:
    std::string name;
    int actionPoints;

    Hero(std::string n, int a) : name(n), actionPoints(a) {}

    void move();
    void guideVillager();
    void attackMonster();
};

#endif
