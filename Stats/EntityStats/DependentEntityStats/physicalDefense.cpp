//
// Created by acurr on 11/29/2017.
//

#include "physicalDefense.h"

double physicalDefense::calculateValue() {
    max = baseMax;
    //Every 5 points in constitution adds 1 to physicalDefense
    //This is just an example of what a dependent stat is you should change this up and make more
    //you must initialize all dependent stats just like you did with the entitystats and add the attributes to the arraylist to use them
    double constitution = attrs.at(0).calculateValue();
    max += constitution / 5.0;
    applyBonuses();
    return max;
}

physicalDefense::physicalDefense(EntityStatName name1, double baseMax1, EntityStatName name, double baseMax)
        : DependentEntityStat(name1, baseMax1) {

}
