//
// Created by acurr on 11/29/2017.
//

#include "Food.h"

Food::Food(std::string name, std::string description, int healAmount) {
    this->healAmount = healAmount;
    this->name = name;
    assignDescription();
}

double Food::getHealAmount() {
    return healAmount;
}

void Food::setHealAmount(double healAmount) {
    this->healAmount = healAmount;
}

void Food::assignDescription() {
    //description = "Consume to restore up to " + healAmount + " health.";
}
