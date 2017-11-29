//
// Created by acurr on 11/29/2017.
//

#include "Silence.h"

Silence::Silence(int duration) {
    this->duration = duration;
}

Silence::Silence(int duration, LivingEntity e) {
    this->duration = duration;
    this->e = e;
}

int Silence::getDuration() {
    return duration;
}

void Silence::setDuration(int duration) {
    this->duration = duration;
}
