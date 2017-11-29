//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_DAMAGEOVERTIME_H
#define FINALPROJECT_DAMAGEOVERTIME_H


#include "../Enums/DamageType.h"
#include "../Entities/LivingEntity.h"

class DamageOvertime : public Effect {
private:
    double damage;
    DamageType type = DamageType(0);
    int duration;
    LivingEntity e;

public:
    DamageOvertime(double damage, DamageType type, int duration);

    DamageOvertime(double damage, DamageType type, int duration, LivingEntity e);

    double getDamage();

    void setDamage(double damage);

    DamageType getType();

    void setType(DamageType type);

    int getDuration();

    void setDuration(int duration);
};


#endif //FINALPROJECT_DAMAGEOVERTIME_H
