//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_ROOT_H
#define FINALPROJECT_ROOT_H


#include "../Entities/LivingEntity.h"

class Root : public Effect {
private:
    int duration;
    LivingEntity e;
public:
    Root(int duration);

    Root(int duration, LivingEntity e);

    int getDuration();

    void setDuration(int duration);
};


#endif //FINALPROJECT_ROOT_H
