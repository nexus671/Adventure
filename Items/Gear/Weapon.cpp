//
// Created by acurr on 11/29/2017.
//
#include "Weapon.h"

Weapon::Weapon(Material material, WeaponSuffix suffix, WeaponType type) {
    this->material = material;
    double avgDamage = material.getAvgDamage() * type.getDamageModifier();
    maxDamage = avgDamage + avgDamage * type.getRangeModifier();
    minDamage = avgDamage - avgDamage * type.getRangeModifier();
    this->suffix = suffix;
    this->type = type;
    slot = WornSlot::MAINHAND;
    assignName();
}

Weapon::Weapon(WornSlot slot, Material material, WeaponSuffix suffix, WeaponType type) {
    this->slot = slot;
    double avgDamage = material.getAvgDamage() * type.getDamageModifier();
    maxDamage = avgDamage + avgDamage * type.getRangeModifier();
    minDamage = avgDamage - avgDamage * type.getRangeModifier();
    this->suffix = suffix;
    this->type = type;
    setLevel(material.getLevel());
    assignName();
}

double Weapon::getMaxDamage() {
    return maxDamage;
}

void Weapon::setMaxDamage(double maxDamage) {
    this->maxDamage = maxDamage;
}

double Weapon::getMinDamage() {
    return minDamage;
}

void Weapon::setMinDamage(double minDamage) {
    this->minDamage = minDamage;
}

double Weapon::getRandomDamage() {
    return (minDamage + (maxDamage - minDamage) * RandomNumber.random.nextDouble());
}

WeaponSuffix Weapon::getSuffix() {
    return suffix;
}

void Weapon::setSuffix(WeaponSuffix suffix) {
    this->suffix = suffix;
}

WeaponType Weapon::getType() {
    return type;
}

void Weapon::setType(WeaponType type) {
    this->type = type;
}

DamageType Weapon::getAttackStyle() {
    return type.getStyle();
}

double Weapon::getCritChance() {
    return type.getCritChance();
}

int Weapon::getRange() {
    return type.getRange();
}

ElementalType Weapon::getElementalType() {
    return suffix.getElementalType();
}

void Weapon::assignName() {
    std::string str = getMaterial().toString();
    str += " " + type.toString();
    if (suffix.toString() != WeaponSuffix::NONE.toString()) {
        //  str += " of " + suffix;
    }
    name = str;
}

void Weapon::assignDescription() {
    CombatGear::assignDescription();
    if (type.isTwoHanded())
        description += "Two-Handed";
    else
        description += "One-Handed";
    //description += " Weapon" + "\n";
    //description += "Damage: " + minDamage + " - " + maxDamage + "\n";
    //description += "Attack Style: " + type.getStyle() + "\n";
    //description += "Critical Chance: " + (type.getCritChance() * 100) + "%\n";
    //description += "Attack Range: " + type.getRange() + "\n";
}

std::string Weapon::toString() {
    std::string str = name + "\n";
    //str += "Damage Range = " + minDamage + " - " + maxDamage;
    return str;
}
