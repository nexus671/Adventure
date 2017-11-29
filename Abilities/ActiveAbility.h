//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_ACTIVEABLITIY_H
#define FINALPROJECT_ACTIVEABLITIY_H


#include "Ability.h"
#include "../Enums/AbilityRange.h"
#include "../Targets/Target.h"
#include "../Entities/LivingEntity.h"


class ActiveAbility : public Ability {
protected:
    AbilityRange range;
    std::vector<Target> targets;

public:
    void use(std::vector<LivingEntity> LivingEntitys)= 0;

    AbilityRange getRange();

    std::vector<Target> getTargets();

    void setTargets(std::vector<Target> targets);
};


#endif //FINALPROJECT_ACTIVEABLITIY_H
