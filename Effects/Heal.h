//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_HEAL_H
#define FINALPROJECT_HEAL_H


#include "Effect.h"
#include "../Entities/LivingEntity.h"

class Heal : public Effect {
private:
    double heal;
    LivingEntity e;

public:
    Heal(double heal);

    Heal(double heal, LivingEntity e);

    double getHeal();

    void setHeal(double heal);
};


#endif //FINALPROJECT_HEAL_H
