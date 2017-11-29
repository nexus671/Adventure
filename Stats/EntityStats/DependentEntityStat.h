//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_DEPENDENTENTITYSTAT_H
#define FINALPROJECT_DEPENDENTENTITYSTAT_H


#include <algorithm>
#include "EntityStat.h"
#include "../../Effects/Buff.h"

class DependentEntityStat : public EntityStat {
protected:
    std::vector<EntityStat> attrs;

    /*************
     * Constructors
     *************/

public:
    DependentEntityStat(EntityStatName name, double baseMax);

    /*************
     * Getters
     *************/

    void addStat(EntityStat attr);

    void removeStat(EntityStat attr);

    void addBonus(Buff e);

    void removeBonus(Buff e);

    double calculateValue();

    std::string toString();
};


#endif //FINALPROJECT_DEPENDENTENTITYSTAT_H
