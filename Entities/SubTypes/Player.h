//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_PLAYER_H
#define FINALPROJECT_PLAYER_H


#include "../LivingEntity.h"

class Player : public LivingEntity {
/************* Constructors *************/

public:
    Player(std::string name, RaceName raceName, std::string sex, Profession profession) {
        setName(name);
        this->setRaceName(raceName);
        this->setSex(sex);
        this->setProfession(profession);
        this->setStats(EntityStats(1));
        this->setWornGear(WornGear());
        this->setInventory(Inventory());
        setStats(EntityStats(1));
    }
};


#endif //FINALPROJECT_PLAYER_H
