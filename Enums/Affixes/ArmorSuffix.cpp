//
// Created by acurr on 11/29/2017.
//

#include "ArmorSuffix.h"

std::string ArmorSuffix::getDescription(ArmorSuffix suffix) {
    std::string description = "";
    if (suffix.getElementalType().toString() == ElementalType::NONE.toString()) {
        description = "Passively increased";
    }
    switch (suffix.n) {
        case 1:
            description += " constitution.";
            break;
        case 2:
            description += " wisdom.";
            break;
        case 3:
            description += " strength.";
            break;
        case 4:
            description += " wisdom.";
            break;
        case 5:
            description += " luck.";
            break;
        case 6:
        case 7:
            description = "Increased defensive stats (light elemental type).";
            break;
        case 8:
        case 9:
            description = "Saps enemy mana upon taking damage (dark elemental type).";
            break;
        case 10:
        case 11:
            description = "Applies a health draining burning effect to enemies for several turns upon taking damage (fire elemental type).";
            break;
        case 12:
        case 13:
            description += "Reduces enemy movement stat for their next turn upon taking damage (frost elemental type).";
            break;
    }
    return description;
}

ElementalType ArmorSuffix::getElementalType() {
    return elementalType;
}

bool ArmorSuffix::isElemental() {
    return elementalType.toString() == ElementalType::NONE.toString();
}

ArmorSuffix::ArmorSuffix(ElementalType type, int n) {
    this->n = n;
    switch (n) {
        case 0:
            lowercase = "none";
            break;
        case 1:
            lowercase = "hardiness";
            break;
        case 2:
            lowercase = "enlightening";
            break;
        case 3:
            lowercase = "brawling";
            break;
        case 4:
            lowercase = "aptitude";
            break;
        case 5:
            lowercase = "prosperity";
            break;
        case 6:
            lowercase = "incandescence";
            break;
        case 7:
            lowercase = "radiance";
            break;
        case 8:
            lowercase = "twilight";
            break;
        case 9:
            lowercase = "shadow";
            break;
        case 10:
            lowercase = "flame";
            break;
        case 11:
            lowercase = "burning";
            break;
        case 12:
            lowercase = "ice";
            break;
        case 13:
            lowercase = "freezing";
            break;
        default:
            lowercase = "";
    }
    elementalType = type;
}

ArmorSuffix::ArmorSuffix(int n) {
    this->n = n;
    switch (n) {
        case 0:
            lowercase = "none";
            break;
        case 1:
            lowercase = "hardiness";
            break;
        case 2:
            lowercase = "enlightening";
            break;
        case 3:
            lowercase = "brawling";
            break;
        case 4:
            lowercase = "aptitude";
            break;
        case 5:
            lowercase = "prosperity";
            break;
        case 6:
            lowercase = "incandescence";
            break;
        case 7:
            lowercase = "radiance";
            break;
        case 8:
            lowercase = "twilight";
            break;
        case 9:
            lowercase = "shadow";
            break;
        case 10:
            lowercase = "flame";
            break;
        case 11:
            lowercase = "burning";
            break;
        case 12:
            lowercase = "ice";
            break;
        case 13:
            lowercase = "freezing";
            break;
        default:
            lowercase = "";
    }
    elementalType = ElementalType::NONE;
}

const ArmorSuffix ArmorSuffix::NONE = ArmorSuffix(0);
const ArmorSuffix ArmorSuffix::HARDINESS = ArmorSuffix(1);
const ArmorSuffix ArmorSuffix::ENLIGHTENING = ArmorSuffix(2);
const ArmorSuffix ArmorSuffix::BRAWLING = ArmorSuffix(3);
const ArmorSuffix ArmorSuffix::APTITUDE = ArmorSuffix(4);
const ArmorSuffix ArmorSuffix::PROSPERITY = ArmorSuffix(5);
const ArmorSuffix ArmorSuffix::INCANDESCENCE = ArmorSuffix(ElementalType::LIGHT, 6);
const ArmorSuffix ArmorSuffix::RADIANCE = ArmorSuffix(ElementalType::LIGHT, 7);
const ArmorSuffix ArmorSuffix::TWILIGHT = ArmorSuffix(ElementalType::DARK, 8);
const ArmorSuffix ArmorSuffix::SHADOW = ArmorSuffix(ElementalType::DARK, 9);
const ArmorSuffix ArmorSuffix::FLAME = ArmorSuffix(ElementalType::FIRE, 10);
const ArmorSuffix ArmorSuffix::BURNING = ArmorSuffix(ElementalType::FIRE, 11);
const ArmorSuffix ArmorSuffix::ICE = ArmorSuffix(ElementalType::FROST, 12);
const ArmorSuffix ArmorSuffix::FREEZING = ArmorSuffix(ElementalType::FROST, 13);

std::string ArmorSuffix::toString() const {
    return lowercase;
}

int const ArmorSuffix::getIndex() {
    return n;
}

ArmorSuffix::ArmorSuffix() {}
