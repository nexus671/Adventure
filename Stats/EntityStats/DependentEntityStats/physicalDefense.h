//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_PHYSICALDEFENSE_H
#define FINALPROJECT_PHYSICALDEFENSE_H


#include "../DependentEntityStat.h"

class physicalDefense : public DependentEntityStat {
public:
    physicalDefense(EntityStatName name1, double baseMax1, EntityStatName name, double baseMax);

    double calculateValue();
};


#endif //FINALPROJECT_PHYSICALDEFENSE_H
