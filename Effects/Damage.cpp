//
// Created by acurr on 11/29/2017.
//

#include "Damage.h"

Damage::Damage(double damage, DamageType type) {
    this->damage = damage;
    this->type = type;
}

Damage::Damage(double damage, DamageType type, LivingEntity e) {
    this->damage = damage;
    this->type = type;
    this->e = e;
}

double Damage::getDamage() {
    return damage;
}

void Damage::setDamage(double damage) {
    this->damage = damage;
}

DamageType Damage::getType() {
    return type;
}

void Damage::setType(DamageType type) {
    this->type = type;
}
