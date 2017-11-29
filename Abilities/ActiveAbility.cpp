//
// Created by acurr on 11/29/2017.
//

#include "ActiveAbility.h"

AbilityRange ActiveAbility::getRange() {
    return range;
}

std::vector<Target> ActiveAbility::getTargets() {
    return targets;
}

void ActiveAbility::setTargets(std::vector<Target> targets) {
    this->targets = targets;
}
