//
// Created by acurr on 11/27/2017.
//

#include "WeaponType.h"

WeaponType::WeaponType(bool twoHanded, DamageType style, double damageModifier, double rangeModifier, double critChance,
                       int range, int n) {
    this->twoHanded = twoHanded;
    this->style = style;
    this->damageModifier = damageModifier;
    this->rangeModifier = rangeModifier;
    this->critChance = critChance;
    this->range = range;
    switch (n) {
        case 0:
            lowercase = "sword";
            break;
        case 1:
            lowercase = "mace";
            break;
        case 2:
            lowercase = "dagger";
            break;
        case 3:
            lowercase = "scimitar";
            break;
        case 4:
            lowercase = "battleaxe";
            break;
        case 5:
            lowercase = "warhammer";
            break;
        case 6:
            lowercase = "broadsword";
            break;
        case 7:
            lowercase = "pike";
            break;
        case 8:
            lowercase = "halberd";
            break;
        case 9:
            lowercase = "flail";
            break;
        case 10:
            lowercase = "bow";
            break;
        case 11:
            lowercase = "crossbow";
            break;
        case 12:
            lowercase = "staff";
            break;
        case 13:
            lowercase = "wand";
            break;
        default:
            lowercase = "";
    }
}

bool WeaponType::isTwoHanded() {
    return twoHanded;
}

std::string WeaponType::getLowercase() {
    return lowercase;
}

DamageType WeaponType::getStyle() {
    return style;
}

double WeaponType::getDamageModifier() {
    return damageModifier;
}

double WeaponType::getRangeModifier() {
    return rangeModifier;
}

double WeaponType::getCritChance() {
    return critChance;
}

int WeaponType::getRange() {
    return range;
}

std::string WeaponType::toString() {
    return lowercase;
}

const WeaponType WeaponType::SWORD = WeaponType(false, DamageType::SLASHING, 1, .05, .15, 1, 0);
const WeaponType WeaponType::MACE = WeaponType(false, DamageType::CRUSHING, 1, .3, .25, 1, 1);
const WeaponType WeaponType::DAGGER = WeaponType(false, DamageType::PIERCING, .95, .15, .05, 1, 2);
const WeaponType WeaponType::SCIMITAR = WeaponType(false, DamageType::SLASHING, .98, .1, .2, 1, 3);
const WeaponType WeaponType::BATTLEAXE = WeaponType(true, DamageType::SLASHING, 1.7, .5, .3, 2, 4);
const WeaponType WeaponType::WARHAMMER = WeaponType(true, DamageType::CRUSHING, 1.7, .6, .3, 2, 5);
const WeaponType WeaponType::BROADSWORD = WeaponType(true, DamageType::SLASHING, 1.7, .4, .4, 2, 6);
const WeaponType WeaponType::PIKE = WeaponType(true, DamageType::PIERCING, 1.7, .2, .2, 3, 7);
const WeaponType WeaponType::HALBERD = WeaponType(true, DamageType::SLASHING, 1.1, .2, .1, 3, 8);
const WeaponType WeaponType::FLAIL = WeaponType(true, DamageType::CRUSHING, 2, .95, 0, 2, 9);
const WeaponType WeaponType::BOW = WeaponType(true, DamageType::PIERCING, .8, .2, .2, 10, 10);
const WeaponType WeaponType::CROSSBOW = WeaponType(false, DamageType::PIERCING, .6, .3, .1, 8, 11);
const WeaponType WeaponType::STAFF = WeaponType(true, DamageType::CRUSHING, .2, .2, 0, 1, 12);
const WeaponType WeaponType::WAND = WeaponType(false, DamageType::CRUSHING, .1, .1, 0, 1, 13);

