//
// Created by acurr on 11/27/2017.
//

#ifndef FINALPROJECT_ABILITYTYPE_H
#define FINALPROJECT_ABILITYTYPE_H

#include <string>

class AbilityType {
    static const AbilityType AOE;
    static const AbilityType TARGETED;

    std::string lowercase;

    AbilityType(int n);

public:
    static const AbilityType PASSIVE;

    std::string toString() const;
};


#endif //FINALPROJECT_ABILITYTYPE_H
