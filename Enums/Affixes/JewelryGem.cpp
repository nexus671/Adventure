//
// Created by acurr on 11/29/2017.
//

#include "JewelryGem.h"

std::string JewelryGem::toString() {
    return lowercase;
}

double JewelryGem::getPowerModifier() {
    return powerModifier;
}

JewelryGem::JewelryGem(double powerModifier, int n) {
    this->powerModifier = powerModifier;
    switch (n) {
        case 0:
            lowercase = "none";
            break;
        case 1:
            lowercase = "amethyst";
            break;
        case 2:
            lowercase = "opal";
            break;
        case 3:
            lowercase = "garnet";
            break;
        case 4:
            lowercase = "topaz";
            break;
        case 5:
            lowercase = "jade";
            break;
        case 6:
            lowercase = "tanzanite";
            break;
        case 7:
            lowercase = "iolite";
            break;
        case 8:
            lowercase = "sapphire";
            break;
        case 9:
            lowercase = "morganite";
            break;
        case 10:
            lowercase = "alexandrite";
            break;
        case 11:
            lowercase = "emerald";
            break;
        case 12:
            lowercase = "ruby";
            break;
        case 13:
            lowercase = "diamond";
            break;
        default:
            lowercase = "";
    }
}

const JewelryGem JewelryGem::NONE = JewelryGem(.2, 0);
const JewelryGem JewelryGem::AMETHYST = JewelryGem(.3, 1);
const JewelryGem JewelryGem::OPAL = JewelryGem(.4, 2);
const JewelryGem JewelryGem::GARNET = JewelryGem(.5, 3);
const JewelryGem JewelryGem::TOPAZ = JewelryGem(.6, 4);
const JewelryGem JewelryGem::JADE = JewelryGem(.7, 5);
const JewelryGem JewelryGem::TANZANITE = JewelryGem(.8, 6);
const JewelryGem JewelryGem::IOLITE = JewelryGem(.9, 7);
const JewelryGem JewelryGem::SAPPHIRE = JewelryGem(1, 8);
const JewelryGem JewelryGem::MORGANITE = JewelryGem(1.1, 9);
const JewelryGem JewelryGem::ALEXANDRITE = JewelryGem(1.2, 10);
const JewelryGem JewelryGem::EMERALD = JewelryGem(1.3, 11);
const JewelryGem JewelryGem::RUBY = JewelryGem(1.4, 12);
const JewelryGem JewelryGem::DIAMOND = JewelryGem(1.5, 13);
