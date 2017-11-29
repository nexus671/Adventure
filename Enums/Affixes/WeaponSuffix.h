//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_WEAPONSUFFIX_H
#define FINALPROJECT_WEAPONSUFFIX_H

#include <string>
#include "../ElementalType.h"

class WeaponSuffix {
    static const WeaponSuffix TRIUMPH;
    static const WeaponSuffix FEROCITY;
    static const WeaponSuffix VICTORY;
    static const WeaponSuffix CHAOS;
    static const WeaponSuffix EONS;
    static const WeaponSuffix OBLIVION;
    static const WeaponSuffix INCANDESCENCE;
    static const WeaponSuffix RADIANCE;
    static const WeaponSuffix TWILIGHT;
    static const WeaponSuffix SHADOW;
    static const WeaponSuffix FLAME;
    static const WeaponSuffix BURNING;
    static const WeaponSuffix ICE;
    static const WeaponSuffix FREEZING;

private:
    ElementalType elementalType = ElementalType::NONE;
    std::string lowercase;

    WeaponSuffix(int n);

public:
    ElementalType getElementalType();

    bool isElemental();

    std::string toString() const;

    WeaponSuffix(ElementalType elementalType, int n);

    static const WeaponSuffix NONE;
};


#endif //FINALPROJECT_WEAPONSUFFIX_H
