//
// Created by acurr on 11/27/2017.
//

#ifndef FINALPROJECT_DAMAGETYPE_H
#define FINALPROJECT_DAMAGETYPE_H

#include <string>

class DamageType {
public:
    static const DamageType PIERCING;
    static const DamageType SLASHING;
    static const DamageType CRUSHING;
    static const DamageType ARCANE;


    std::string lowercase;

    DamageType(int n);

    std::string toString();
};


#endif //FINALPROJECT_DAMAGETYPE_H
