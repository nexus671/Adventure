//
// Created by acurr on 11/27/2017.
//

#ifndef FINALPROJECT_ARMORTYPE_H
#define FINALPROJECT_ARMORTYPE_H

#include <string>
#include "WornSlot.h"

class ArmorType {
    static const ArmorType HELMET;
    static const ArmorType SALLET;
    static const ArmorType HOOD;
    static const ArmorType CHESTPLATE;
    static const ArmorType CHAINMAIL;
    static const ArmorType CUIRASS;
    static const ArmorType ROBETOP;
    static const ArmorType GAUNTLETS;
    static const ArmorType GLOVES;
    static const ArmorType VAMBRACES;
    static const ArmorType GREAVES;
    static const ArmorType CHAUSSES;
    static const ArmorType ROBEBOTTOM;
    static const ArmorType BOOTS;
    static const ArmorType SABATONS;
    static const ArmorType SHIELD;
private:
    WornSlot slot = WornSlot(0);
    std::string lowercase;
    double pierceModifier;
    double slashModifier;
    double crushModifier;
    double arcaneModifier;
    bool metallic;
public:
    ArmorType(WornSlot slot, bool metallic, int n);

    ArmorType(WornSlot slot, double pierceModifier, double slashModifier, double crushModifier, double arcaneModifier,
              bool metallic, int n);

    WornSlot getSlot();

    std::string getLowercase();

    double getPierceModifier();

    void setPierceModifier(double pierceModifier);

    double getSlashModifier();

    void setSlashModifier(double slashModifier);

    double getCrushModifier();

    void setCrushModifier(double crushModifier);

    double getArcaneModifier();

    void setArcaneModifier(double arcaneModifier);

    bool isMetallic();


    std::string toString();
};


#endif //FINALPROJECT_ARMORTYPE_H
