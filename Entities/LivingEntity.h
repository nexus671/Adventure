//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_LIVINGENTITY_H
#define FINALPROJECT_LIVINGENTITY_H


#include "Entity.h"
#include "../HoldingSystems/WornGear.h"
#include "../HoldingSystems/Inventory.h"
#include "../Effects/Damage.h"
#include "../Items/Gear/Jewelry.h"
#include "../Items/Consumables/Food.h"
#include "../Items/Consumables/Potion.h"
#include "../Professions/Profession.h"
#include "../Items/Gear/Weapon.h"
#include <string>

class LivingEntity : public Entity {
private:
    const static int MAX_LEVEL = 21;
protected:
    Profession profession;
    WornGear wornGear;
    Inventory inventory;
    EntityStats stats;

public:
    LivingEntity(std::string name, RaceName raceName, std::string sex, std::string description,
                 Profession profession, EntityStats entityStats, Inventory inventory, WornGear wornGear);

    LivingEntity();

    static int getMaxLevel();

    /************* Specific Methods *************/

    /**
     * Equips the specified gear object into the correct slot in the worn gear,
     * if the entity has the proper level.
     *
     * @param g The gear object to be equipped.
     * @return True if the item was equipped successfully
     */
    bool equip(Gear g);

    /**
     * Equips a weapon, checking for errors (level is too high, or inventory is full and both
     * weapon slots are full.
     *
     * @param w The weapon to be equipped.
     * @return True if the weapon was successfully equipped, false if it was not.
     */
    bool equip(Weapon w);

    void printAblities();


    void receiveDamage(Damage d);

    bool equip(Jewelry j);

    /**
     * Picks up an item off the ground, and adds it to the inventory.
     *
     * @param i The item to be picked up.
     * @return False if the item could not be added, otherwise true.
     */
    bool pickUp(Item i);

    /**
     * Player consumes a food object, healing the player for the amount specified
     * by the food object. Does not heal over maximum health.
     *
     * @param f The food object that is consumed.
     */
    void consume(Food f);

    /**
     * Boosts all the stats specified by the potion.
     *
     * @param p The potion to be consumed.
     */
    void consume(Potion p);

    /*************
     * Combat Values
     *************/

    /**
     * Gets the damage of a basic attack, accounting for weapon damage and the user's strength level.
     * Note: Crit chance is not accounted for in this calculation. It should be applied after the
     * basic attack value is generated.
     *
     * @return The damage value.
     */
    double getBasicAttackDamage();

    /**
     * Gets the value for the bonus from the elemental affix of the weapon.
     *
     * @return A value for the strength of the elemental buff, dependent on the type of buff.
     */
    double getWeaponElementalValue();

    /**
     * Gets an array of doubles that represents the elemental values for each elemental type.
     * The array returns the values in the following order: {light, dark, fire, frost}
     *
     * @return An array of values representing the elemental buff modifiers
     */
    double *getArmorElementalValues();

    /************* Getters *************/

    EntityStats getStats();

    /**************
     * Setters
     *************/

    void setStats(EntityStats stats);

    Profession getProfession();

    void setProfession(Profession profession);

    WornGear getWornGear();

    void setWornGear(WornGear wornGear);

    Inventory getInventory();

    void setInventory(Inventory inventory);

    /*************
     * Getters
     *************/

    std::string getName();

    /**************
     * Setters
     *************/

    void setName(std::string name);

    RaceName getRaceName();

    void setRaceName(RaceName raceName);

    std::string getSex();

    void setSex(std::string sex);

    std::string getDescription();

    void setDescription(std::string description);


    std::string toString();

};


#endif //FINALPROJECT_LIVINGENTITY_H
