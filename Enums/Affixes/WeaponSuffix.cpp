//
// Created by acurr on 11/29/2017.
//

#include "WeaponSuffix.h"

std::string WeaponSuffix::toString() const {
    return lowercase;
}

bool WeaponSuffix::isElemental() {
    return elementalType.toString() == ElementalType::NONE.toString();
}

ElementalType WeaponSuffix::getElementalType() {
    return elementalType;
}

WeaponSuffix::WeaponSuffix(int n) {
    elementalType = ElementalType::NONE;
    switch (n) {
        case 0:
            lowercase = "none";
            break;
        case 1:
            lowercase = "triumph";
            break;
        case 2:
            lowercase = "ferocity";
            break;
        case 3:
            lowercase = "victory";
            break;
        case 4:
            lowercase = "chaos";
            break;
        case 5:
            lowercase = "eons";
            break;
        case 6:
            lowercase = "oblivion";
            break;
        case 7:
            lowercase = "incandescence";
            break;
        case 8:
            lowercase = "radiance";
            break;
        case 9:
            lowercase = "twilight";
            break;
        case 10:
            lowercase = "shadow";
            break;
        case 11:
            lowercase = "flame";
            break;
        case 12:
            lowercase = "burning";
            break;
        case 13:
            lowercase = "ice";
            break;
        case 14:
            lowercase = "freezing";
            break;
        default:
            lowercase = "";
    }
}

WeaponSuffix::WeaponSuffix(ElementalType elementalType, int n) {
    this->elementalType = elementalType;
    switch (n) {
        case 0:
            lowercase = "none";
            break;
        case 1:
            lowercase = "triumph";
            break;
        case 2:
            lowercase = "ferocity";
            break;
        case 3:
            lowercase = "victory";
            break;
        case 4:
            lowercase = "chaos";
            break;
        case 5:
            lowercase = "eons";
            break;
        case 6:
            lowercase = "oblivion";
            break;
        case 7:
            lowercase = "incandescence";
            break;
        case 8:
            lowercase = "radiance";
            break;
        case 9:
            lowercase = "twilight";
            break;
        case 10:
            lowercase = "shadow";
            break;
        case 11:
            lowercase = "flame";
            break;
        case 12:
            lowercase = "burning";
            break;
        case 13:
            lowercase = "ice";
            break;
        case 14:
            lowercase = "freezing";
            break;
        default:
            lowercase = "";
    }
}

const WeaponSuffix WeaponSuffix::NONE = WeaponSuffix(0);
const WeaponSuffix WeaponSuffix::TRIUMPH = WeaponSuffix(1);
const WeaponSuffix WeaponSuffix::FEROCITY = WeaponSuffix(2);
const WeaponSuffix WeaponSuffix::VICTORY = WeaponSuffix(3);
const WeaponSuffix WeaponSuffix::CHAOS = WeaponSuffix(4);
const WeaponSuffix WeaponSuffix::EONS = WeaponSuffix(5);
const WeaponSuffix WeaponSuffix::OBLIVION = WeaponSuffix(6);
const WeaponSuffix WeaponSuffix::INCANDESCENCE = WeaponSuffix(ElementalType::LIGHT, 7);
const WeaponSuffix WeaponSuffix::RADIANCE = WeaponSuffix(ElementalType::LIGHT, 8);
const WeaponSuffix WeaponSuffix::TWILIGHT = WeaponSuffix(ElementalType::DARK, 9);
const WeaponSuffix WeaponSuffix::SHADOW = WeaponSuffix(ElementalType::DARK, 10);
const WeaponSuffix WeaponSuffix::FLAME = WeaponSuffix(ElementalType::FIRE, 11);
const WeaponSuffix WeaponSuffix::BURNING = WeaponSuffix(ElementalType::FIRE, 12);
const WeaponSuffix WeaponSuffix::ICE = WeaponSuffix(ElementalType::FROST, 13);
const WeaponSuffix WeaponSuffix::FREEZING = WeaponSuffix(ElementalType::FROST, 14);
