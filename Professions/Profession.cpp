//
// Created by acurr on 11/20/2017.
//

#include "Profession.h"

Profession::Profession() {

}

ProfessionName Profession::getProfessionName() {
    return name;
}

void Profession::setName(ProfessionName name) {
    this->name = name;
}

std::vector<Ability> Profession::getUnlockedAbilities() {
    return unlockedAbilities;
}

void Profession::setUnlockedAbilities(std::vector<Ability> unlockedAbilities) {
    this->unlockedAbilities = unlockedAbilities;
}

std::vector<ActiveAbility> Profession::getUnlockedActiveAbilities() {
    std::vector<ActiveAbility> abilities;
    for (Ability a : unlockedAbilities) {
        if (a.getType() == AbilityType.AOE || a.getType() == AbilityType.TARGETED) {
            abilities.push_back((ActiveAbility) a);
        }
    }
    return abilities;
}

std::vector<Ability> Profession::getAbilities() {
    return abilities;
}

void Profession::setAbilities(std::vector<Ability> abilities) {
    this->abilities = abilities;
}
