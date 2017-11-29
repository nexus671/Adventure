//
// Created by acurr on 11/27/2017.
//

#include "AbilityRange.h"

AbilityRange::AbilityRange(int r, std::string n) {
    radius = r;
    name = n;
}

int AbilityRange::getRadius() {
    return radius;
}

std::string AbilityRange::getName() {
    return name;
}

const AbilityRange AbilityRange::NONE = AbilityRange(0, "PERSONAL");
const AbilityRange AbilityRange::TOUCH = AbilityRange(1, "Close");
const AbilityRange AbilityRange::SMALL = AbilityRange(3, "Small");
const AbilityRange AbilityRange::MEDIUM = AbilityRange(5, "Medium");
const AbilityRange AbilityRange::LARGE = AbilityRange(10, "Large");