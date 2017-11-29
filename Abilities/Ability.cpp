//
// Created by acurr on 11/20/2017.
//

#include "Ability.h"

AbilityType Ability::getType() {
    return type;
}

void Ability::setType(AbilityType type) {
    this->type = type;
}

std::string Ability::getName() {
    return name;
}

void Ability::setName(std::string name) {
    this->name = name;
}

int Ability::getLevel() {
    return level;
}

void Ability::setLevel(int level) {
    this->level = level;
}

std::vector<Effect> Ability::getEffects() {
    return effects;
}

void Ability::setEffects(std::vector<Effect> effects) {
    this->effects = effects;
}

int Ability::getDuration() {
    return duration;
}

void Ability::setDuration(int duration) {
    this->duration = duration;
}

int Ability::getCost() {
    return cost;
}

void Ability::setCost(int cost) {
    this->cost = cost;
}
