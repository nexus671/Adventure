//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_BARBARIAN_H
#define FINALPROJECT_BARBARIAN_H


#include "Profession.h"
#include "../Entities/LivingEntity.h"

class Barbarian : public Profession {
private:
    static int MAXLEVEL = 18;
    EntityStats stats;
    double exp = 0;
    int level = 1;
    int sp = 1;

    int *levelrequirements = {1, 1};

public:
    Barbarian(LivingEntity e);

    //Passives


    //Actives



    int getMAXLEVEL();


    EntityStats getStats();


    void setStats(EntityStats stats);


    double getExp();


    void setExp(double exp);


    int getLevel();


    void setLevel(int level);
};


#endif //FINALPROJECT_BARBARIAN_H
