//
// Created by acurr on 11/27/2017.
//

#ifndef FINALPROJECT_ELEMENTALTYPE_H
#define FINALPROJECT_ELEMENTALTYPE_H

#include <string>

class ElementalType {

    // These constants are multiplied by (CombatGear.getLevel() / Gear.getMAXLEVEL());
private:
    constexpr static double LIGHT_SCALING = .05;
    constexpr static double DARK_SCALING = .1;
    constexpr static double FIRE_SCALING = .05;
    constexpr static double FROST_SCALING = .3;
    std::string lowercase;

public:
    static double getLightScaling();

    static double getDarkScaling();

    static double getFireScaling();

    static double getFrostScaling();

    std::string toString() const;

    /**
     * LIGHT: Buffs defensive bonuses on hit.
     * DARK: Saps a percentage of current mana.
     * FIRE: Applies a burning effect for several turns (drains current health).
     * FROST: Lowers move spaces on next turn.
     */
    static const ElementalType NONE;
    static const ElementalType LIGHT;
    static const ElementalType DARK;
    static const ElementalType FIRE;
    static const ElementalType FROST;

    ElementalType(int n);
    ElementalType();
};


#endif //FINALPROJECT_ELEMENTALTYPE_H
