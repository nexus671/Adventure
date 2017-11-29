//
// Created by acurr on 11/29/2017.
//
#include "Monster.h"

Monster::Monster(bool hostile, EntityStats stats) {

    this->hostile = hostile;
    this->stats = stats;
}

bool Monster::isHostile() {
    return hostile;
}

EntityStats Monster::getStats() {
    return stats;
}

void Monster::setStats(EntityStats stats) {
    this->stats = stats;
}
