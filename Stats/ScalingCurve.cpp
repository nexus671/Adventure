//
// Created by acurr on 11/20/2017.
//

#include "ScalingCurve.h"


double ScalingCurve::getDamageScaling(int level) {
    return pow(k1, (1 + level / k2));
}

double ScalingCurve::getExp(int level) {
    double exp = 0;
    for (int lvl = 1; lvl <= level && lvl <= LivingEntity::getMaxLevel(); lvl++) {
        exp += lvl + 300 * pow(5, lvl / 4);
    }
    return exp;
}


/**
 * Gets the percentage reduction of a specified armor value.
 *
 * @param totalArmorValue The armor stat to be checked (ex. pierce defense)
 * @return A double 0-1 that represents the percentage damage reduction.
 */
double ScalingCurve::getArmorReduction(double totalArmorValue) {
    return ((totalArmorValue * totalArmorValue) / (3 * (totalArmorValue * totalArmorValue) + 20 * totalArmorValue));
}

bool ScalingCurve::levelUp(double exp, int currentLevel) {
    return (getExp(currentLevel + 1) <= exp);
}