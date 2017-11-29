//
// Created by acurr on 11/29/2017.
//

#include "Slow.h"

Slow::Slow(int duration, double magnitude) {
    this->duration = duration;
    this->magnitude = magnitude;
}

Slow::Slow(int duration, double magnitude, LivingEntity e) {
    this->duration = duration;
    this->magnitude = magnitude;
    this->e = e;
}

int Slow::getDuration() {
    return duration;
}

void Slow::setDuration(int duration) {
    this->duration = duration;
}

double Slow::getMagnitude() {
    return magnitude;
}

void Slow::setMagnitude(double magnitude) {
    this->magnitude = magnitude;
}
