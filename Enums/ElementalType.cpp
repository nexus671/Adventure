//
// Created by acurr on 11/27/2017.
//

#include "ElementalType.h"

ElementalType::ElementalType(int n) {
    switch (n) {
        case 0:
            lowercase = "light";
            break;
        case 1:
            lowercase = "dark";
            break;
        case 2:
            lowercase = "fire";
            break;
        case 3:
            lowercase = "frost";
            break;
        case 4:
            lowercase = "none";
            break;
        default:
            lowercase = "";
    }
}

double ElementalType::getLightScaling() {
    return LIGHT_SCALING;
}

double ElementalType::getDarkScaling() {
    return DARK_SCALING;
}

double ElementalType::getFireScaling() {
    return FIRE_SCALING;
}

double ElementalType::getFrostScaling() {
    return FROST_SCALING;
}

std::string ElementalType::toString() const {
    return lowercase;
}
ElementalType::ElementalType() {

}

const ElementalType ElementalType::LIGHT = ElementalType(0);
const ElementalType ElementalType::DARK = ElementalType(1);
const ElementalType ElementalType::FIRE = ElementalType(2);
const ElementalType ElementalType::FROST = ElementalType(3);
const ElementalType ElementalType::NONE = ElementalType(4);


