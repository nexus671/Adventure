//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_SLOW_H
#define FINALPROJECT_SLOW_H


#include "../Entities/LivingEntity.h"

class Slow : public Effect {
private:
    int duration;
    double magnitude;
    LivingEntity e;

public:
    Slow(int duration, double magnitude);

    Slow(int duration, double magnitude, LivingEntity e);

    int getDuration();

    void setDuration(int duration);

    double getMagnitude();

    void setMagnitude(double magnitude);
};

#endif //FINALPROJECT_SLOW_H
