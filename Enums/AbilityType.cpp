//
// Created by acurr on 11/27/2017.
//

#include "AbilityType.h"

AbilityType::AbilityType(int n) {
    switch (n) {
        case 0:
            lowercase = "aoe";
            break;
        case 1:
            lowercase = "targeted";
            break;
        case 2:
            lowercase = "passive";
            break;
        default:
            lowercase = "";
    }
}

std::string AbilityType::toString() const {
    return lowercase;
}

const AbilityType AbilityType::AOE = AbilityType(0);
const AbilityType AbilityType::TARGETED = AbilityType(1);
const AbilityType AbilityType::PASSIVE = AbilityType(2);
