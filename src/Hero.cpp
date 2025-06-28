#include "Hero.h"
#include <iostream>

void Hero::move() {
    std::cout << name << " moves to a new location." << std::endl;
}

void Hero::guideVillager() {
    std::cout << name << " guides a villager to safety!" << std::endl;
}

void Hero::attackMonster() {
    std::cout << name << " attacks the monster bravely!" << std::endl;
}
