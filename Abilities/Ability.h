//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_ABILITY_H
#define FINALPROJECT_ABILITY_H


#include <vector>
#include "../RPGObject.h"
#include "../Effects/Effect.h"
#include "../Enums/AbilityType.h"

class Ability : public RPGObject {

protected:
    AbilityType type;
    int level;
    std::vector<Effect> effects;
    int cost;
private:
    int duration;

public:
    AbilityType getType();

    void setType(AbilityType type);

    std::string getName();

    void setName(std::string name);

    int getLevel();

    void setLevel(int level);

    std::vector<Effect> getEffects();

    void setEffects(std::vector<Effect> effects);

    int getDuration();

    void setDuration(int duration);

    int getCost();

    void setCost(int cost);
};


#endif //FINALPROJECT_ABILITY_H
