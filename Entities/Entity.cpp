//
// Created by acurr on 11/20/2017.
//

#include "Entity.h"


/************* Constructors *************/


Entity::Entity(std::string name, RaceName raceName, std::string sex, std::string description) {
    this->name = name;
    this->raceName = raceName;
    this->sex = sex;
    this->description = description;
}

Entity::Entity() {
}

/************* Getters *************/

std::string Entity::getName() {
    return this->name;
}

/************** Setters *************/

void Entity::setName(std::string name) {
    this->name = name;
}

RaceName Entity::getRaceName() {
    return this->raceName;
}

void Entity::setRaceName(RaceName raceName) {
    this->raceName = raceName;
}

std::string Entity::getSex() {
    return this->sex;
}

void Entity::setSex(std::string sex) {
    this->sex = sex;
}

std::string Entity::getDescription() {
    return this->description;
}

void Entity::setDescription(std::string description) {
    this->description = description;
}

std::string Entity::toString() {
    return this->name;
}