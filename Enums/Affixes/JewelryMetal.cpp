//
// Created by acurr on 11/29/2017.
//

#include "JewelryMetal.h"

std::string JewelryMetal::toString() {
    return lowercase;
}

double JewelryMetal::getPowerModifier() {
    return powerModifier;
}

JewelryMetal::JewelryMetal(double powerModifier, int n) {
    switch (n) {
        case 0:
            lowercase = "coppper";
            break;
        case 1:
            lowercase = "silver";
            break;
        case 2:
            lowercase = "gold";
            break;
        default:
            lowercase = "";
    }
    this->powerModifier = powerModifier;
}


const JewelryMetal JewelryMetal::COPPER = JewelryMetal(.3, 0);
const JewelryMetal JewelryMetal::SILVER = JewelryMetal(.6, 1);
const JewelryMetal JewelryMetal::GOLD = JewelryMetal(1, 2);
