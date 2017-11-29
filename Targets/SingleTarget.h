//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_SINGLETARGET_H
#define FINALPROJECT_SINGLETARGET_H


#include "Target.h"
#include "../Entities/LivingEntity.h"

class SingleTarget : public Target {
    LivingEntity entity;
    bool friendlyFire;

public:
    SingleTarget(LivingEntity entity, bool friendlyFire);

    LivingEntity getEntity();

    void setEntity(LivingEntity entity);

    bool isFriendlyFire();

    void setFriendlyFire(bool friendlyFire);
};


#endif //FINALPROJECT_SINGLETARGET_H
