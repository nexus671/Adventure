//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_COMBATGEAR_H
#define FINALPROJECT_COMBATGEAR_H


#include "Gear.h"
#include "../../Enums/Affixes/Material.h"

class CombatGear : public Gear {
protected:
    Material material = Material(0);

public:
    CombatGear();

    CombatGear(Material material);

    Material getMaterial();

    void setMaterial(Material material);

    void assignDescription();
};


#endif //FINALPROJECT_COMBATGEAR_H
