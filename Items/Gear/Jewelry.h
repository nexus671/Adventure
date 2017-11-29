//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_JEWELRY_H
#define FINALPROJECT_JEWELRY_H


#include <vector>
#include "../../Enums/Affixes/JewelryGem.h"
#include "../../Enums/Affixes/JewelryMetal.h"
#include "../../Enums/EntityStatName.h"
#include "Gear.h"

class Jewelry : public Gear {
private:
    const static int MAX_STATS = 3; //the max number of stats that a jewelry item can buff
    JewelryMetal metal = JewelryMetal(0, 0);
    JewelryGem gem = JewelryGem(0, 0);
    std::vector<EntityStatName> statsAffected;
    double amount; // percent increase of the entity stat

public:
    Jewelry(JewelryMetal metal, JewelryGem gem, std::vector<EntityStatName> stats, bool isRing);

    static int getMaxStats();

    JewelryMetal getMetal();

    void setMetal(JewelryMetal metal);

    JewelryGem getGem();

    void setGem(JewelryGem gem);

    std::vector<EntityStatName> getStatsAffected();

    void setStatsAffected(std::vector<EntityStatName> statsAffected);

    double getAmount();

    void setAmount(double amount);

    void assignName();

    void assignDescription();

    Jewelry() {

    }
};


#endif //FINALPROJECT_JEWELRY_H
