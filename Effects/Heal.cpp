//
// Created by acurr on 11/29/2017.
//

#include "Heal.h"

Heal::Heal(double heal) {
    this->heal = heal;
}

Heal::Heal(double heal, LivingEntity e) {
    this->heal = heal;
    this->e = e;
}

double Heal::getHeal() {
    return heal;
}

void Heal::setHeal(double heal) {
    this->heal = heal;
}
