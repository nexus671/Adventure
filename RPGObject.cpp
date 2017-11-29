//
// Created by acurr on 11/19/2017.
//

#include "RPGObject.h"

std::string RPGObject::getName() {
    return name;
}

void RPGObject::setName(std::string nname) {
    name = nname;
}

std::string RPGObject::getDescription() {
    return description;
}

void RPGObject::setDescription(std::string ndescription) {
    description = ndescription;
}
