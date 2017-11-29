//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_SCALINGCURVE_H
#define FINALPROJECT_SCALINGCURVE_H


#include "../RPGObject.h"
#include "../Entities/LivingEntity.h"
#include <math.h>

class ScalingCurve : public RPGObject {
private:
    constexpr static double k1 = 2.3;
    constexpr static double k2 = 2.5;
    constexpr static double k3 = 9;

public:
    static double getDamageScaling(int level);

    static double getExp(int level);


    /**
     * Gets the percentage reduction of a specified armor value.
     *
     * @param totalArmorValue The armor stat to be checked (ex. pierce defense)
     * @return A double 0-1 that represents the percentage damage reduction.
     */
    static double getArmorReduction(double totalArmorValue);

    static bool levelUp(double exp, int currentLevel);
};


#endif //FINALPROJECT_SCALINGCURVE_H
