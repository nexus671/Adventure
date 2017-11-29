//
// Created by acurr on 11/29/2017.
//

#include "DependentEntityStat.h"

void DependentEntityStat::removeBonus(Buff e) {
    bonuses.erase(std::remove(bonuses.begin(), bonuses.end(), e), bonuses.end());

}

void DependentEntityStat::addBonus(Buff e) {
    bonuses.push_back(e);
}

void DependentEntityStat::removeStat(EntityStat attr) {

    attrs.erase(std::remove(attrs.begin(), attrs.end(), attr), attrs.end());

}

void DependentEntityStat::addStat(EntityStat attr) {
    attrs.push_back(attr);
}

DependentEntityStat::DependentEntityStat(EntityStatName name, double baseMax) {
    EntityStat(name, baseMax);
}

double DependentEntityStat::calculateValue() {
    max = baseMax;
    applyBonuses();
    return max;
}

std::string DependentEntityStat::toString() {
    //std::string str = name + "\n";
    //str += "Base Max = " + baseMax + "\n";
    //str += "Current Max = " + max + "\n";
    //str += "Current Value = " + current + "\n";
    return "";// str;
}
