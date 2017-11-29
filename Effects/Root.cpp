//
// Created by acurr on 11/29/2017.
//

#include "Root.h"

Root::Root(int duration) {
    this->duration = duration;
}

Root::Root(int duration, LivingEntity e) {
    this->duration = duration;
    this->e = e;
}

int Root::getDuration() {
    return duration;
}

void Root::setDuration(int duration) {
    this->duration = duration;
}
