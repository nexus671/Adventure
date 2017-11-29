//
// Created by acurr on 11/29/2017.
//

#include "ArmorStat.h"

ArmorStat::ArmorStat(std::string name, double maxValue) {
    this->maxValue = maxValue;
    value = maxValue;
    this->name = name;
}

void ArmorStat::setMaxValue(double maxValue) {
    this->maxValue = maxValue;
}

double ArmorStat::getMaxValue() {
    return maxValue;
}

void ArmorStat::setMaxValue(int maxValue) {
    this->maxValue = value;
}

double ArmorStat::getValue() {
    return value;
}

void ArmorStat::setValue(double value) {
    this->value = value;
}

std::string ArmorStat::toString() {
    return ""; // + maxValue;
}

ArmorStat::ArmorStat() {}
