//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_POTION_H
#define FINALPROJECT_POTION_H


#include "Consumable.h"
#include "../../Stats/EntityStats/EntityStat.h"

class Potion : public Consumable {
private:
    double MAX_STATS = 3;
    int flatAmount;
    double percentAmount;
    int duration; //the number of turns the potion lasts
    std::vector<EntityStat> stats; //the stats that are affected
    bool refreshes; //whether the potion buff refreshes every turn


public:
    Potion();

    Potion(int flatAmount, double percentAmount, int duration, std::vector<EntityStat> stats, bool refreshes,
           std::string name);

    double getMAX_STATS();

    int getDuration();

    void setDuration(int duration);

    int getFlatAmount();

    void setFlatAmount(int flatAmount);

    double getPercentAmount();

    void setPercentAmount(double percentAmount);

    std::vector<EntityStat> getStats();

    void setStats(std::vector<EntityStat> stats);

    bool isRefreshes();

    void setRefreshes(bool refreshes);

    void assignDescription();
};


#endif //FINALPROJECT_POTION_H
