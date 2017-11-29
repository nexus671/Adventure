//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_FOOD_H
#define FINALPROJECT_FOOD_H


#include "Consumable.h"

class Food : public Consumable {
private:
    double healAmount;

    /*************
     * Constructors
     *************/

public:
    Food(std::string name, std::string description, int healAmount);

    double getHealAmount();

    void setHealAmount(double healAmount);

    void assignDescription();
};


#endif //FINALPROJECT_FOOD_H
