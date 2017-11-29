//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_GEAR_H
#define FINALPROJECT_GEAR_H


#include "../../Enums/WornSlot.h"
#include "../../Enums/EntityStatName.h"
#include "../../Effects/Buff.h"
#include "../Item.h"


/**
 * Created by Ahmane on 10/21/2015.
 * Class Description: Describes any item that can be equipped in the worn gear (weapon, armor, or jewelry).
 */
class Gear : public Item {
protected:
    const static int MAX_LEVEL = 21;
    WornSlot slot = WornSlot::AMMO;
    int level;
    std::vector<Buff> bonuses;

public:
    Gear();

    static int getMAXLEVEL();

    void addBuffs(std::vector<EntityStatName> stats, double amount);

    void addBonus(Buff e);

    void removeBonus(Buff e);

    std::vector<Buff> getBonusesStat(EntityStatName name);

    void setBonuses(std::vector<Buff> nbonuses);

    WornSlot getSlot();

    void setSlot(WornSlot nslot);

    int getLevel();

    void setLevel(int nlevel);


    bool operator==(Gear gear);
};


#endif //FINALPROJECT_GEAR_H
