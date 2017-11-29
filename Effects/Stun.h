//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_STUN_H
#define FINALPROJECT_STUN_H


#include "../Entities/LivingEntity.h"

class Stun : public Effect {
private:
    int duration;
    LivingEntity e;
public:
    Stun(int duration);

    Stun(int duration, LivingEntity e);

    int getDuration();

    void setDuration(int duration) {
        this->duration = duration;
    }
};


#endif //FINALPROJECT_STUN_H
