//
// Created by acurr on 11/27/2017.
//

#ifndef FINALPROJECT_WEAPONTYPE_H
#define FINALPROJECT_WEAPONTYPE_H

#include <string>
#include "DamageType.h"

class WeaponType {
    static const WeaponType SWORD;
    static const WeaponType MACE;
    static const WeaponType DAGGER;
    static const WeaponType SCIMITAR;
    static const WeaponType BATTLEAXE;
    static const WeaponType WARHAMMER;
    static const WeaponType BROADSWORD;
    static const WeaponType PIKE;
    static const WeaponType HALBERD;
    static const WeaponType FLAIL;
    static const WeaponType BOW;
    static const WeaponType CROSSBOW;
    static const WeaponType STAFF;
    static const WeaponType WAND;

private:
    bool twoHanded;
    std::string lowercase;
    DamageType style = DamageType(0);
    double damageModifier; //multiplied by the avgDamage from the material to determine avg damage
    double rangeModifier; // avgDamage +/- (avgDamage * rangeModifier) = max/min damage
    double critChance;
    int range;

public:
    bool isTwoHanded();

    std::string getLowercase();

    DamageType getStyle();

    double getDamageModifier();

    double getRangeModifier();

    double getCritChance();

    int getRange();


    std::string toString();

    WeaponType(bool twoHanded, DamageType style, double damageModifier, double rangeModifier, double critChance,
               int range, int n);
};


#endif //FINALPROJECT_WEAPONTYPE_H
