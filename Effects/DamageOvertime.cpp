//
// Created by acurr on 11/29/2017.
//

#include "DamageOvertime.h"

DamageOvertime::DamageOvertime(double damage, DamageType type, int duration) {
    this->damage = damage;
    this->type = type;
    this->duration = duration;
}

DamageOvertime::DamageOvertime(double damage, DamageType type, int duration, LivingEntity e) {
    this->damage = damage;
    this->type = type;
    this->duration = duration;
    this->e = e;
}

double DamageOvertime::getDamage() {
    return damage;
}

void DamageOvertime::setDamage(double damage) {
    this->damage = damage;
}

DamageType DamageOvertime::getType() {
    return type;
}

void DamageOvertime::setType(DamageType type) {
    this->type = type;
}

int DamageOvertime::getDuration() {
    return duration;
}

void DamageOvertime::setDuration(int duration) {
    this->duration = duration;
}
