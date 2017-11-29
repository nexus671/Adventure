//
// Created by acurr on 11/29/2017.
//

#include "Creation.h"

Creation::Creation(int duration) {
    this->duration = duration;
}

Creation::Creation(int duration, LivingEntity e) {
    this->duration = duration;
    this->e = e;
}

int Creation::getDuration() {
    return duration;
}

void Creation::setDuration(int duration) {
    this->duration = duration;
}
