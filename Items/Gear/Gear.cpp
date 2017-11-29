//
// Created by acurr on 11/19/2017.
//

#include <algorithm>
#include <utility>
#include "Gear.h"

Gear::Gear() = default;

int Gear::getMAXLEVEL() {
    return MAX_LEVEL;
}

void Gear::addBuffs(std::vector<EntityStatName> stats, double amount) {
    for (const EntityStatName &statName : stats) {
        Buff *buff = new Buff(amount, statName, false);
        addBonus(*buff);
    }
}

void Gear::addBonus(Buff e) {
    bonuses.push_back(e);
}

void Gear::removeBonus(Buff e) {
    bonuses.erase(std::remove(bonuses.begin(), bonuses.end(), e), bonuses.end());
}

std::vector<Buff> Gear::getBonusesStat(EntityStatName name) {
    std::vector<Buff> b;

    for (Buff buffs : bonuses) {
        if (buffs.getStatName() == name)
            b.push_back(buffs);
    }
    return b;
}

void Gear::setBonuses(std::vector<Buff> nbonuses) {
    bonuses = std::move(nbonuses);
}

WornSlot Gear::getSlot() {
    return slot;
}

void Gear::setSlot(WornSlot nslot) {
    slot = std::move(nslot);
}

int Gear::getLevel() {
    return level;
}

void Gear::setLevel(int nlevel) {
    level = nlevel;
}


bool Gear::operator==(Gear gear) {
    return (Item::operator==(gear) && gear.getLevel() == level);
}
