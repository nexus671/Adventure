//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_ARMORSUFFIX_H
#define FINALPROJECT_ARMORSUFFIX_H

#include <string>
#include "../ElementalType.h"

class ArmorSuffix {
    static const ArmorSuffix HARDINESS;
    static const ArmorSuffix ENLIGHTENING;
    static const ArmorSuffix BRAWLING;
    static const ArmorSuffix APTITUDE;
    static const ArmorSuffix PROSPERITY;
    static const ArmorSuffix INCANDESCENCE;
    static const ArmorSuffix RADIANCE;
    static const ArmorSuffix TWILIGHT;
    static const ArmorSuffix SHADOW;
    static const ArmorSuffix FLAME;
    static const ArmorSuffix BURNING;
    static const ArmorSuffix ICE;
    static const ArmorSuffix FREEZING;

private:
    ElementalType elementalType = ElementalType::NONE;
    std::string lowercase;
    int n;

    ArmorSuffix(ElementalType type, int n);

public:
    static std::string getDescription(ArmorSuffix suffix);

    ElementalType getElementalType();

    bool isElemental();

    std::string toString() const;

    ArmorSuffix(int n);

    ArmorSuffix();

    int const getIndex();;

    static const ArmorSuffix NONE;
};


#endif //FINALPROJECT_ARMORSUFFIX_H
