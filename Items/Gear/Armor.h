//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_ARMOR_H
#define FINALPROJECT_ARMOR_H


#include "CombatGear.h"
#include "../../Enums/Affixes/ArmorSuffix.h"
#include "../../Enums/ArmorType.h"
#include "../../Stats/ArmorStat.h"

class Armor : public CombatGear {
private:
    ArmorStat pierceDef;
    ArmorStat slashDef;
    ArmorStat crushDef;
    ArmorStat arcaneDef;
    ArmorSuffix suffix;
    ArmorType type = ArmorType(WornSlot(0), false, 0);

public:
    Armor(WornSlot slot, Material material, ArmorSuffix suffix, ArmorType type);

    ArmorStat getPierceDef();

    void setPierceDef(ArmorStat pierceDef);

    ArmorStat getSlashDef();

    void setSlashDef(ArmorStat slashDef);

    ArmorStat getCrushDef();

    void setCrushDef(ArmorStat crushDef);

    ArmorStat getArcaneDef();

    void setArcaneDef(ArmorStat arcaneDef);

    ArmorSuffix getSuffix();

    void setSuffix(ArmorSuffix suffix);

    ElementalType getElementalType();

    ArmorType getType();

    void setType(ArmorType type);

    void assignName();

    void assignDescription();

    std::string toString();
};


#endif //FINALPROJECT_ARMOR_H
