//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_DAMAGE_H
#define FINALPROJECT_DAMAGE_H


#include "../Enums/DamageType.h"
#include "Effect.h"
#include "../Entities/LivingEntity.h"


class Damage : public Effect {
private:
    double damage;
    DamageType type = DamageType(0);
    LivingEntity e;

public:
    Damage(double damage, DamageType type);

    Damage(double damage, DamageType type, LivingEntity e);

    double getDamage();

    void setDamage(double damage);

    DamageType getType();

    void setType(DamageType type);
};


#endif //FINALPROJECT_DAMAGE_H
