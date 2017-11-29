//
// Created by acurr on 11/29/2017.
//

#include "HealOvertime.h"

HealOvertime::HealOvertime(double heal, int duration) {
    this->heal = heal;
    this->duration = duration;
}

HealOvertime::HealOvertime(double heal, int duration, LivingEntity e) {
    this->heal = heal;
    this->duration = duration;
    this->e = e;
}

double HealOvertime::getHeal() {
    return heal;
}

void HealOvertime::setHeal(double heal) {
    this->heal = heal;
}

int HealOvertime::getDuration() {
    return duration;
}

void HealOvertime::setDuration(int duration) {
    this->duration = duration;
}
