//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_MONSTER_H
#define FINALPROJECT_MONSTER_H


#include "../LivingEntity.h"

class Monster : public LivingEntity {
private:
    bool hostile;

    /************* Constructors *************/

public:
    Monster(bool hostile, EntityStats stats);

    /************* Getters *************/


    /*************
     * Setters
     *************/


    bool isHostile();

    void setHostile(bool hostile) {
        this->hostile = hostile;
    }

    EntityStats getStats();

    void setStats(EntityStats stats);
};


#endif //FINALPROJECT_MONSTER_H
