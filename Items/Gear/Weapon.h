//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_WEAPON_H
#define FINALPROJECT_WEAPON_H


#include "CombatGear.h"
#include "../../Enums/Affixes/WeaponSuffix.h"
#include "../../Enums/WeaponType.h"

class Weapon : public CombatGear {
private:
    double maxDamage;
    double minDamage;
    WeaponSuffix suffix = WeaponSuffix(ElementalType(0), 0);
    WeaponType type = WeaponType(false, DamageType(0), 0, 0, 0, 0, 0);

    /************* Constructors *************/

public:
    Weapon(Material material, WeaponSuffix suffix, WeaponType type);

    Weapon(WornSlot slot, Material material, WeaponSuffix suffix, WeaponType type);

    /************* Getters and Setters *************/

    double getMaxDamage();

    void setMaxDamage(double maxDamage);

    double getMinDamage();

    void setMinDamage(double minDamage);

    double getRandomDamage();

    WeaponSuffix getSuffix();

    void setSuffix(WeaponSuffix suffix);

    WeaponType getType();

    void setType(WeaponType type);

    DamageType getAttackStyle();

    double getCritChance();

    int getRange();

    ElementalType getElementalType();

    void assignName();

    void assignDescription();


    std::string toString();
};


#endif //FINALPROJECT_WEAPON_H
