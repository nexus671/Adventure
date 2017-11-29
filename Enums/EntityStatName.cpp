#include "EntityStatName.h"//
// Created by acurr on 11/19/2017.
//

EntityStatName::EntityStatName() {

}

EntityStatName::EntityStatName(int index) {
    switch (index) {
        case 0:
            lowercase = "health";
            break;
        case 1:
            lowercase = "mana";
            break;
        case 2:
            lowercase = "strength";
            break;
        case 3:
            lowercase = "constitution";
            break;
        case 4:
            lowercase = "wisdom";
            break;
        default:
            lowercase = "";
    }
}

std::string EntityStatName::toString() {
    return lowercase;
}

bool EntityStatName::operator==(EntityStatName entityStatName) {
    return lowercase == entityStatName.toString();
}

const EntityStatName EntityStatName::HEALTH = EntityStatName(0);
const EntityStatName EntityStatName::MANA = EntityStatName(1);
const EntityStatName EntityStatName::STRENGTH = EntityStatName(2);
const EntityStatName EntityStatName::CONSTITUTION = EntityStatName(3);
const EntityStatName EntityStatName::WISDOM = EntityStatName(4);