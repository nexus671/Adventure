//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_WORNGEAR_H
#define FINALPROJECT_WORNGEAR_H


#include "../Items/Gear/Gear.h"

/**
 * Created by Ahmane on 10/21/2015.
 * Class Description: The array of worn gear for a player or monster.
 */
class WornGear : public RPGObject {
private:
    std::vector<Gear> gear;
    int size;

/*************
 * Constructors
 *************/

public:
    WornGear();

/**************
 * Specific Methods
 *************/

    bool contains(Gear g);

    bool slotIsEmpty(WornSlot slot);

/*************
 * Getters
 *************/

    std::vector<Gear> getGear();

    Gear getFromSlot(WornSlot slot);

    std::string toString();
};


#endif //FINALPROJECT_WORNGEAR_H
