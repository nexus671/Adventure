//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_CREATION_H
#define FINALPROJECT_CREATION_H


#include "Effect.h"
#include "../Entities/LivingEntity.h"

class Creation : public Effect {
private:
    int duration;
    LivingEntity e;
public:
    Creation(int duration);

    Creation(int duration, LivingEntity e);

    int getDuration();

    void setDuration(int duration);
};


#endif //FINALPROJECT_CREATION_H
