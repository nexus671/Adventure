//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_ENTITYSTAT_H
#define FINALPROJECT_ENTITYSTAT_H


#include <vector>
#include "../../RPGObject.h"
#include "../../Enums/EntityStatName.h"

class Buff;

class EntityStat : public RPGObject {
protected:
    EntityStatName name;
    double max;
    double baseMax;
    double current;
    std::vector<Buff> bonuses;

    /*************
     * Constructors
     *************/

public:
    EntityStat();

    EntityStat(EntityStatName name, double baseMax);

    /*************
     * Getters
     *************/

    double getMax();

    void setMax(double max);

    /*************
     * Setters
     *************/
    void addBonus(Buff e);

    void removeBonus(Buff e);

    void removeListOfBonuses(std::vector<Buff> buffs);

    void addListOfBonuses(std::vector<Buff> buffs);

    double calculateValue();

protected:
    void applyBonuses();

public:
    double getBaseMax();

    void setBaseMax(double baseMax);

    EntityStatName getStatName();

    double getCurrent();

    void setCurrent(double current);

    std::vector<Buff> getBonuses();

    void setBonuses(std::vector<Buff> bonuses);


    std::string toString();
};


#endif //FINALPROJECT_ENTITYSTAT_H
