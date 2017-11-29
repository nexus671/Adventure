//
// Created by acurr on 11/29/2017.
//

#include "EntityStats.h"

EntityStats::EntityStats() {
    level = 1;
    exp = 0;
    health = EntityStat(EntityStatName::HEALTH, 100);
    mana = EntityStat(EntityStatName::MANA, 100);
    strength = EntityStat(EntityStatName::STRENGTH, 1);
    constitution = EntityStat(EntityStatName::CONSTITUTION, 1);
    wisdom = EntityStat(EntityStatName::WISDOM, 1);
}

EntityStats::EntityStats(int level) {
    this->level = level;
    health = EntityStatName::EntityStat(EntityStatName::HEALTH, 90 + (level * 10));

    mana = EntityStatName::EntityStat(EntityStatName::MANA, 90 + (level * 10));
    strength = EntityStatName::EntityStat(EntityStatName::STRENGTH, 1 + level);
    constitution = EntityStatName::EntityStat(EntityStatName::CONSTITUTION, 1 + level);
    wisdom = EntityStatName::EntityStat(EntityStatName::WISDOM, 1 + level);
}

EntityStat EntityStats::getStat(EntityStatName name) {
    if (name == EntityStatName::HEALTH)
        return health;
    if (name == EntityStatName::MANA)
        return mana;
    if (name == EntityStatName::STRENGTH)
        return strength;
    if (name == EntityStatName::CONSTITUTION)
        return constitution;
    if (name == EntityStatName::WISDOM)
        return wisdom;
    return health;
}

void EntityStats::setBaseStat(EntityStatName name, double value) {
    if (name == EntityStatName::HEALTH)
        health.setBaseMax(value);
    if (name == EntityStatName::MANA)
        mana.setBaseMax(value);
    if (name == EntityStatName::STRENGTH)
        strength.setBaseMax(value);
    if (name == EntityStatName::CONSTITUTION)
        constitution.setBaseMax(value);
    if (name == EntityStatName::WISDOM)
        wisdom.setBaseMax(value);
    health.setBaseMax(value);
}

void EntityStats::setStat(EntityStatName name, double value) {
    if (name == EntityStatName::HEALTH)
        health.setMax(value);
    if (name == EntityStatName::MANA)
        mana.setMax(value);
    if (name == EntityStatName::STRENGTH)
        strength.setMax(value);
    if (name == EntityStatName::CONSTITUTION)
        constitution.setMax(value);
    if (name == EntityStatName::WISDOM)
        wisdom.setMax(value);
    health.setMax(value);
}

int EntityStats::getLevel() {
    return level;
}

void EntityStats::setLevel(int level) {
    this->level = level;
}

EntityStat EntityStats::getHealth() {
    return health;
}

void EntityStats::setHealth(EntityStat health) {
    this->health = health;
}

EntityStat EntityStats::getMana() {
    return mana;
}

void EntityStats::setMana(EntityStat mana) {
    this->mana = mana;
}

EntityStat EntityStats::getStrength() {
    return strength;
}

void EntityStats::setStrength(EntityStat strength) {
    this->strength = strength;
}

EntityStat EntityStats::getConstitution() {
    return constitution;
}

void EntityStats::setConstitution(EntityStat constitution) {
    this->constitution = constitution;
}

EntityStat EntityStats::getWisdom() {
    return wisdom;
}

void EntityStats::setWisdom(EntityStat wisdom) {
    this->wisdom = wisdom;
}

double EntityStats::getExp() {
    return exp;
}

void EntityStats::setExp(double exp) {
    this->exp = exp;
}

void EntityStats::setByLevel(int level) {
    this->level = level;
    health = EntityStatName::EntityStat(EntityStatName::HEALTH, 90 + (level * 10));
    mana = EntityStatName::EntityStat(EntityStatName::MANA, 90 + (level * 10));
    strength = EntityStatName::EntityStat(EntityStatName::STRENGTH, 1 + level);
    constitution = EntityStatName::EntityStat(EntityStatName::CONSTITUTION, 1 + level);
    wisdom = EntityStat(EntityStatName::WISDOM, 1 + level);
}

std::string EntityStats::toString() {
    std::string str = ""; //"Level = " + level + "\n";
    str += health.toString() + "\n";
    str += mana.toString() + "\n";
    str += strength.toString() + "\n";
    str += constitution.toString() + "\n";
    str += wisdom.toString() + "\n";
    return str;
}
