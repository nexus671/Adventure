//
// Created by acurr on 11/29/2017.
//
#include "Barbarian.h"

Barbarian::Barbarian(LivingEntity e) {
    this->name = ProfessionName.BARBARIAN;
    stats = e.getStats();

    BasicAttack ablitiy1 = new BasicAttack(level, e);
    abilities.push_back(ablitiy1);
    unlockedAbilities.push_back(ablitiy1);
    //BarbarianPassive ablitiy2 = new BarbarianPassive(level, e);
    //abilities.add(ablitiy2);
    //unlockedAbilities.add(ablitiy2);
    HeavyStrike ablitiy3 = new HeavyStrike(level, e);
    abilities.push_back(ablitiy3);
    unlockedAbilities.push_back(ablitiy3);

}

int Barbarian::getMAXLEVEL() {
    return MAXLEVEL;
}

EntityStats Barbarian::getStats() {
    return stats;
}

void Barbarian::setLevel(int level) {
    this->level = level;
}

int Barbarian::getLevel() {
    return level;
}

void Barbarian::setExp(double exp) {
    this->exp = exp;
}

double Barbarian::getExp() {
    return exp;
}

void Barbarian::setStats(EntityStats stats) {
    this->stats = stats;
}
