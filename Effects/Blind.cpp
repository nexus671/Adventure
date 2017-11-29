//
// Created by acurr on 11/29/2017.
//

#include "Blind.h"

Blind::Blind(int duration, double magnitude) {
    this->duration = duration;
    this->magnitude = magnitude;
}

Blind::Blind(int duration, double magnitude, LivingEntity e) {
    this->duration = duration;
    this->magnitude = magnitude;
    this->e = e;
}

int Blind::getDuration() {
    return duration;
}

void Blind::setDuration(int duration) {
    this->duration = duration;
}

double Blind::getMagnitude() {
    return magnitude;
}

void Blind::setMagnitude(double magnitude) {
    this->magnitude = magnitude;
}
