//
// Created by acurr on 11/29/2017.
//

#include "SingleTarget.h"

SingleTarget::SingleTarget(LivingEntity entity, bool friendlyFire) {
    this->entity = entity;
    this->friendlyFire = friendlyFire;
}

LivingEntity SingleTarget::getEntity() {
    return entity;
}

void SingleTarget::setEntity(LivingEntity entity) {
    this->entity = entity;
}

bool SingleTarget::isFriendlyFire() {
    return friendlyFire;
}

void SingleTarget::setFriendlyFire(bool friendlyFire) {
    this->friendlyFire = friendlyFire;
}
