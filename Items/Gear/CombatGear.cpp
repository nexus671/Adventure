//
// Created by acurr on 11/29/2017.
//

#include "CombatGear.h"

CombatGear::CombatGear() {
}

CombatGear::CombatGear(Material material) {
    this->material = material;
}

Material CombatGear::getMaterial() {
    return material;
}

void CombatGear::setMaterial(Material material) {
    this->material = material;
}

void CombatGear::assignDescription() {
    description = name + "\n";
    //description += "Level: " + level + "\n";
}
