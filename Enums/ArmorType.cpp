//
// Created by acurr on 11/27/2017.
//

#include "ArmorType.h"

ArmorType::ArmorType(WornSlot slot, bool metallic, int n) {
    this->slot = slot;
    pierceModifier = 1;
    slashModifier = 1;
    crushModifier = 1;
    arcaneModifier = 1;
    this->metallic = metallic;
    switch (n) {
        case 0:
            lowercase = "helmet";
            break;
        case 1:
            lowercase = "sallet";
            break;
        case 2:
            lowercase = "hood";
            break;
        case 3:
            lowercase = "chestplate";
            break;
        case 4:
            lowercase = "chainmail";
            break;
        case 5:
            lowercase = "cuirass";
            break;
        case 6:
            lowercase = "robetop";
            break;
        case 7:
            lowercase = "gauntlets";
            break;
        case 8:
            lowercase = "gloves";
            break;
        case 9:
            lowercase = "vambraces";
            break;
        case 10:
            lowercase = "greaves";
            break;
        case 11:
            lowercase = "chausses";
            break;
        case 12:
            lowercase = "robebottom";
            break;
        case 13:
            lowercase = "boots";
            break;
        case 14:
            lowercase = "sabatons";
            break;
        case 15:
            lowercase = "shield";
            break;
        default:
            lowercase = "";
    }
}

ArmorType::ArmorType(WornSlot slot, double pierceModifier, double slashModifier, double crushModifier,
                     double arcaneModifier, bool metallic, int n) {
    this->slot = slot;
    this->pierceModifier = pierceModifier;
    this->slashModifier = slashModifier;
    this->crushModifier = crushModifier;
    this->arcaneModifier = arcaneModifier;
    this->metallic = metallic;
    switch (n) {
        case 0:
            lowercase = "helmet";
            break;
        case 1:
            lowercase = "sallet";
            break;
        case 2:
            lowercase = "hood";
            break;
        case 3:
            lowercase = "chestplate";
            break;
        case 4:
            lowercase = "chainmail";
            break;
        case 5:
            lowercase = "cuirass";
            break;
        case 6:
            lowercase = "robetop";
            break;
        case 7:
            lowercase = "gauntlets";
            break;
        case 8:
            lowercase = "gloves";
            break;
        case 9:
            lowercase = "vambraces";
            break;
        case 10:
            lowercase = "greaves";
            break;
        case 11:
            lowercase = "chausses";
            break;
        case 12:
            lowercase = "robebottom";
            break;
        case 13:
            lowercase = "boots";
            break;
        case 14:
            lowercase = "sabatons";
            break;
        case 15:
            lowercase = "shield";
            break;
        default:
            lowercase = "";
    }
}

WornSlot ArmorType::getSlot() {
    return slot;
}

std::string ArmorType::getLowercase() {
    return lowercase;
}

double ArmorType::getPierceModifier() {
    return pierceModifier;
}

void ArmorType::setPierceModifier(double pierceModifier) {
    this->pierceModifier = pierceModifier;
}

double ArmorType::getSlashModifier() {
    return slashModifier;
}

void ArmorType::setSlashModifier(double slashModifier) {
    this->slashModifier = slashModifier;
}

double ArmorType::getCrushModifier() {
    return crushModifier;
}

void ArmorType::setCrushModifier(double crushModifier) {
    this->crushModifier = crushModifier;
}

double ArmorType::getArcaneModifier() {
    return arcaneModifier;
}

void ArmorType::setArcaneModifier(double arcaneModifier) {
    this->arcaneModifier = arcaneModifier;
}

bool ArmorType::isMetallic() {
    return metallic;
}

std::string ArmorType::toString() {
    return lowercase;
}

const ArmorType ArmorType::HELMET = ArmorType(WornSlot::HEAD, true, 0);
const ArmorType ArmorType::SALLET = ArmorType(WornSlot::HEAD, true, 1);
const ArmorType ArmorType::HOOD = ArmorType(WornSlot::HEAD, false, 2);
const ArmorType ArmorType::CHESTPLATE = ArmorType(WornSlot::CHEST, true, 3);
const ArmorType ArmorType::CHAINMAIL = ArmorType(WornSlot::CHEST, true, 4);
const ArmorType ArmorType::CUIRASS = ArmorType(WornSlot::CHEST, true, 5);
const ArmorType ArmorType::ROBETOP = ArmorType(WornSlot::CHEST, false, 6);
const ArmorType ArmorType::GAUNTLETS = ArmorType(WornSlot::GLOVES, true, 7);
const ArmorType ArmorType::GLOVES = ArmorType(WornSlot::GLOVES, false, 8);
const ArmorType ArmorType::VAMBRACES = ArmorType(WornSlot::GLOVES, true, 9);
const ArmorType ArmorType::GREAVES = ArmorType(WornSlot::LEGS, true, 10);
const ArmorType ArmorType::CHAUSSES = ArmorType(WornSlot::LEGS, true, 11);
const ArmorType ArmorType::ROBEBOTTOM = ArmorType(WornSlot::LEGS, false, 12);
const ArmorType ArmorType::BOOTS = ArmorType(WornSlot::FEET, false, 13);
const ArmorType ArmorType::SABATONS = ArmorType(WornSlot::FEET, true, 14);
const ArmorType ArmorType::SHIELD = ArmorType(WornSlot::OFFHAND, true, 15);

