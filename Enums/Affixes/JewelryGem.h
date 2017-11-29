//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_JEWELRYGEM_H
#define FINALPROJECT_JEWELRYGEM_H

#include <string>

class JewelryGem {
    static const JewelryGem NONE;
    static const JewelryGem AMETHYST;
    static const JewelryGem OPAL;
    static const JewelryGem GARNET;
    static const JewelryGem TOPAZ;
    static const JewelryGem JADE;
    static const JewelryGem TANZANITE;
    static const JewelryGem IOLITE;
    static const JewelryGem SAPPHIRE;
    static const JewelryGem MORGANITE;
    static const JewelryGem ALEXANDRITE;
    static const JewelryGem EMERALD;
    static const JewelryGem RUBY;
    static const JewelryGem DIAMOND;

    double powerModifier; //multiplied by the stats of an enchanted piece of jewelry
    std::string lowercase;

public:
    double getPowerModifier();

    std::string toString();

    JewelryGem(double powerModifier, int n);
};


#endif //FINALPROJECT_JEWELRYGEM_H
