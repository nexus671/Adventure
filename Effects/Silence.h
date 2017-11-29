//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_SILENCE_H
#define FINALPROJECT_SILENCE_H


#include "../Entities/LivingEntity.h"

class Silence : public Effect {
private:
    int duration;
    LivingEntity e;
public:
    Silence(int duration);

    Silence(int duration, LivingEntity e);

    int getDuration();

    void setDuration(int duration);
};


#endif //FINALPROJECT_SILENCE_H
