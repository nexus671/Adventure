//
// Created by acurr on 11/27/2017.
//

#include "DamageType.h"

DamageType::DamageType(int n) {
    switch (n) {
        case 0:
            lowercase = "piercing";
            break;
        case 1:
            lowercase = "slashing";
            break;
        case 2:
            lowercase = "crushing";
            break;
        case 3:
            lowercase = "arcane";
            break;
        default:
            lowercase = "";
    }
}

std::string DamageType::toString() {
    return lowercase;
}

const DamageType DamageType::PIERCING = DamageType(0);
const DamageType DamageType::SLASHING = DamageType(1);
const DamageType DamageType::CRUSHING = DamageType(2);
const DamageType DamageType::ARCANE = DamageType(3);

