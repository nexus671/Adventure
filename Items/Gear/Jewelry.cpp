//
// Created by acurr on 11/29/2017.
//

#include "Jewelry.h"

Jewelry::Jewelry(JewelryMetal metal, JewelryGem gem, std::vector<EntityStatName> stats, bool isRing) {
    this->metal = metal;
    this->gem = gem;
    statsAffected = stats;
    amount = metal.getPowerModifier() * gem.getPowerModifier();
    if (isRing) {
        slot = WornSlot::RING;
    } else {
        slot = WornSlot::NECK;
    }
    for (EntityStatName statAffected : stats) {
        Buff buff = Buff(amount, statAffected, false);
        this->addBonus(buff);
    }
    assignName();
    assignDescription();

}

int Jewelry::getMaxStats() {
    return MAX_STATS;
}

JewelryMetal Jewelry::getMetal() {
    return metal;
}

void Jewelry::setMetal(JewelryMetal metal) {
    this->metal = metal;
}

JewelryGem Jewelry::getGem() {
    return gem;
}

void Jewelry::setGem(JewelryGem gem) {
    this->gem = gem;
}

std::vector<EntityStatName> Jewelry::getStatsAffected() {
    return statsAffected;
}

void Jewelry::setStatsAffected(std::vector<EntityStatName> statsAffected) {
    this->statsAffected = statsAffected;
}

double Jewelry::getAmount() {
    return amount;
}

void Jewelry::setAmount(double amount) {
    this->amount = amount;
}

void Jewelry::assignName() {
    //std::string str = metal + " ";
    //str += gem + " ";
    //if (slot == WornSlot.RING) {
    //    str += "Ring";
    //} else {
    //    str += "Necklace";
    // }
    //  name = str;
}

void Jewelry::assignDescription() {
    description = name + "\n";
    description += "Increases ";
    for (int i = 0; i < statsAffected.size(); i++) {
        description += statsAffected.at(i).toString();
        if (statsAffected.size() == MAX_STATS && i != (statsAffected.size() - 1)) {
            description += ", ";
        }
        if (statsAffected.size() != MAX_STATS) {
            description += " ";
        }
        if (i == (statsAffected.size() - (MAX_STATS - 1))) {
            description += "and ";
        }
    }
}
