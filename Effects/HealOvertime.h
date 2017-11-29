//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_HEALOVERTIME_H
#define FINALPROJECT_HEALOVERTIME_H


#include "../Entities/LivingEntity.h"

class HealOvertime : public Effect {
private:
    double heal;
    int duration;
    LivingEntity e;
public:
    HealOvertime(double heal, int duration);

    HealOvertime(double heal, int duration, LivingEntity e);

    double getHeal();

    void setHeal(double heal);

    int getDuration();

    void setDuration(int duration);
};


#endif //FINALPROJECT_HEALOVERTIME_H
