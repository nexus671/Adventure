//
// Created by acurr on 11/29/2017.
//

#include "Stun.h"

Stun::Stun(int duration) {
    this->duration = duration;
}

Stun::Stun(int duration, LivingEntity e) {
    this->duration = duration;
    this->e = e;
}

int Stun::getDuration() {
    return duration;
}
