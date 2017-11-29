//
// Created by acurr on 11/19/2017.
//

#include "EntityStat.h"
#include "../../Effects/Buff.h"

EntityStatName name;
double max;
double baseMax;
double current;

/*************
 * Constructors
 *************/
EntityStat::EntityStat() {

}

EntityStat::EntityStat(EntityStatName name, double baseMax) {
    this->name = name;
    this->baseMax = baseMax;
    this->current = baseMax;
    max = baseMax;
}

/*************
 * Getters
 *************/

double EntityStat::getMax() {
    return calculateValue();
}

void EntityStat::setMax(double max) {
    this->max = max;
}

/*************
 * Setters
 *************/
void EntityStat::addBonus(Buff e) {
    bonuses.push_back(e);
}

void EntityStat::removeBonus(Buff e) {
    //bonuses.remove(e);
}

void EntityStat::removeListOfBonuses(std::vector<Buff> buffs) {
    //bonuses.removeAll(buffs);
}

void EntityStat::addListOfBonuses(std::vector<Buff> buffs) {
    //bonuses.addAll(buffs);
}

double EntityStat::calculateValue() {
    max = baseMax;
    applyBonuses();
    return max;
}

void EntityStat::applyBonuses() {
    max = baseMax;
    double bonusValue = 0;
    double bonusMultiplier = 0;

    for (Buff b : bonuses) {
        if (b.isDebuff()) {
            bonusValue -= b.getValue();
            bonusMultiplier -= b.getMagnitude();
        } else {
            bonusValue += b.getValue();
            bonusMultiplier += b.getMagnitude();
        }
    }
    max *= (1 + bonusMultiplier);
    max += bonusValue;
}

double EntityStat::getBaseMax() {
    return baseMax;
}

void EntityStat::setBaseMax(double baseMax) {
    this->baseMax = baseMax;
}

EntityStatName EntityStat::getStatName() {
    return name;
}

double EntityStat::getCurrent() {
    return current;
}

void EntityStat::setCurrent(double current) {
    this->current = current;
}

std::vector<Buff> EntityStat::getBonuses() {
    return bonuses;
}

void EntityStat::setBonuses(std::vector<Buff> bonuses) {
    this->bonuses = bonuses;
}


std::string EntityStat::toString() {
    std::string str = name.toString() + "\n";
    // str += "Base Max = " + baseMax + "\n";
    // str += "Current Max = " + max + "\n";
    /// str += "Current Value = " + current + "\n";
    return str;
}