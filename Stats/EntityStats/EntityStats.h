//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_ENTITYSTATS_H
#define FINALPROJECT_ENTITYSTATS_H


#include "../../RPGObject.h"
#include "EntityStat.h"

class EntityStats : public RPGObject {
protected:
    int level;
    double exp;
    EntityStat health;
    EntityStat mana;
    EntityStat strength;
    EntityStat constitution;
    EntityStat wisdom;

    /************* Constructors *************/

public:
    EntityStats();

    EntityStats(int level);

    EntityStat getStat(EntityStatName name);

    void setBaseStat(EntityStatName name, double value);

    void setStat(EntityStatName name, double value);

    /*************
     * Getters and Setters
     *************/

    int getLevel();

    void setLevel(int level);

    EntityStat getHealth();

    void setHealth(EntityStat health);

    EntityStat getMana();

    void setMana(EntityStat mana);


    EntityStat getStrength();

    void setStrength(EntityStat strength);

    EntityStat getConstitution();

    void setConstitution(EntityStat constitution);

    EntityStat getWisdom();

    void setWisdom(EntityStat wisdom);

    double getExp();

    void setExp(double exp);

    void setByLevel(int level);


    std::string toString();
};


#endif //FINALPROJECT_ENTITYSTATS_H
