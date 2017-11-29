//
// Created by acurr on 11/29/2017.
//

#include "Potion.h"

Potion::Potion() {
    flatAmount = 0;
    percentAmount = 0;
    duration = 1;
    refreshes = false;
    setName("Unnamed Potion");
    setDescription("No Description");
    setStackable(false);
}

Potion::Potion(int flatAmount, double percentAmount, int duration, std::vector<EntityStat> stats, bool refreshes,
               std::string name) {
    this->flatAmount = flatAmount;
    this->percentAmount = percentAmount;
    this->duration = duration;
    this->stats = stats;
    this->refreshes = refreshes;
    this->name = name;
    this->stackable = false;
    assignDescription();
}

double Potion::getMAX_STATS() {
    return MAX_STATS;
}

int Potion::getDuration() {
    return duration;
}

void Potion::setDuration(int duration) {
    this->duration = duration;
}

int Potion::getFlatAmount() {
    return flatAmount;
}

void Potion::setFlatAmount(int flatAmount) {
    this->flatAmount = flatAmount;
}

double Potion::getPercentAmount() {
    return percentAmount;
}

void Potion::setPercentAmount(double percentAmount) {
    this->percentAmount = percentAmount;
}

std::vector<EntityStat> Potion::getStats() {
    return stats;
}

void Potion::setStats(std::vector<EntityStat> stats) {
    this->stats = stats;
}

bool Potion::isRefreshes() {
    return refreshes;
}

void Potion::setRefreshes(bool refreshes) {
    this->refreshes = refreshes;
}

void Potion::assignDescription() {
    description = "Consume to increase ";
    for (int i = 0; i < stats.size(); i++) {
        description += stats.at(i).getStatName().toString();
        if (stats.size() == MAX_STATS && i != (stats.size() - 1)) {
            description += ", ";
        }
        if (i == (stats.size() - (MAX_STATS - 1))) {
            description += "and ";
        }
    }
    description += " by ";
    bool pctBuff = percentAmount != 1;
    bool flatBuff = flatAmount != 0;
    if (pctBuff) {
        if (percentAmount > 1)
            description += ((percentAmount - 1) * 100);
        else
            description += percentAmount;
        description += "%";
    }
    if (pctBuff && flatBuff) {
        description += " plus ";
    }
    if (flatBuff) {
        if (flatAmount > 0)
            description += flatAmount;
    }
    //description += " for " + duration + " turns.";
    if (refreshes) {
        description += " Refreshes each turn.";
    }
}
