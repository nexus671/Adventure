//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_BLIND_H
#define FINALPROJECT_BLIND_H


#include "../Entities/LivingEntity.h"

class Blind : public Entity {
private:
    int duration;
    double magnitude;
    LivingEntity e;

public:
    Blind(int duration, double magnitude);

    Blind(int duration, double magnitude, LivingEntity e);

    int getDuration();

    void setDuration(int duration);

    double getMagnitude();

    void setMagnitude(double magnitude);
};


#endif //FINALPROJECT_BLIND_H
