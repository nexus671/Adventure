//
// Created by acurr on 11/29/2017.
//
#include "Armor.h"

Armor::Armor(WornSlot slot, Material material, ArmorSuffix suffix, ArmorType type) {
    this->slot = slot;
    this->material = material;
    this->suffix = suffix;
    this->type = type;
    pierceDef = ArmorStat("Piercing Defense", material.getAvgDefense() * type.getPierceModifier());
    slashDef = ArmorStat("Slashing Defense", material.getAvgDefense() * type.getSlashModifier());
    crushDef = ArmorStat("Crushing Defense", material.getAvgDefense() * type.getCrushModifier());
    arcaneDef = ArmorStat("Arcane Defense", material.getAvgDefense() * type.getArcaneModifier());
    this->level = material.getLevel();
    assignName();
    assignDescription();
    setLevel(material.getLevel());
}

ArmorStat Armor::getPierceDef() {
    return pierceDef;
}

void Armor::setPierceDef(ArmorStat pierceDef) {
    this->pierceDef = pierceDef;
}

ArmorStat Armor::getSlashDef() {
    return slashDef;
}

void Armor::setSlashDef(ArmorStat slashDef) {
    this->slashDef = slashDef;
}

ArmorStat Armor::getCrushDef() {
    return crushDef;
}

void Armor::setCrushDef(ArmorStat crushDef) {
    this->crushDef = crushDef;
}

ArmorStat Armor::getArcaneDef() {
    return arcaneDef;
}

void Armor::setArcaneDef(ArmorStat arcaneDef) {
    this->arcaneDef = arcaneDef;
}

ArmorSuffix Armor::getSuffix() {
    return suffix;
}

void Armor::setSuffix(ArmorSuffix suffix) {
    this->suffix = suffix;
}

ElementalType Armor::getElementalType() {
    return suffix.getElementalType();
}

ArmorType Armor::getType() {
    return type;
}

void Armor::setType(ArmorType type) {
    this->type = type;

}

void Armor::assignName() {
    name = material.toString() + " " + type.toString();
    if (suffix.toString() != ArmorSuffix::NONE.toString()) {
        //name += " of " + suffix;
    }
}

void Armor::assignDescription() {
    assignDescription();
    //description += "Worn Slot: " + slot + "\n";
    description += "Pierce Defense: " + pierceDef + "\n";
    description += "Slash Defense: " + slashDef + "\n";
    description += "Crush Defense: " + crushDef + "\n";
    description += "Arcane Defense: " + arcaneDef + "\n";
    if (suffix.toString() != ArmorSuffix::NONE.toString())
        description += "Suffix Effect: " + ArmorSuffix.getDescription(suffix) + "\n";
    if (!bonuses.empty()) {
        for (Buff b : bonuses) {
            description += b.getDescription() + "\n";
        }
    }
}

std::string Armor::toString() {
    std::string str = name + "\n";
    str += "Pierce Defense: " + pierceDef + "\n";
    str += "Slash Defense: " + slashDef + "\n";
    str += "Crush Defense: " + crushDef + "\n";
    str += "Arcane Defense: " + arcaneDef;
    return str;
}
