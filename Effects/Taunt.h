//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_TAUNT_H
#define FINALPROJECT_TAUNT_H


#include "../Entities/LivingEntity.h"

class Taunt : public Effect {
private:
    int duration;
    LivingEntity e;
public:
    Taunt(int duration);

    Taunt(int duration, LivingEntity e);

    int getDuration();

    void setDuration(int duration);
};


#endif //FINALPROJECT_TAUNT_H
