//
// Created by acurr on 11/29/2017.
//

#include "Taunt.h"

Taunt::Taunt(int duration) {
    this->duration = duration;
}

Taunt::Taunt(int duration, LivingEntity e) {
    this->duration = duration;
    this->e = e;
}

int Taunt::getDuration() {
    return duration;
}

void Taunt::setDuration(int duration) {
    this->duration = duration;
}
