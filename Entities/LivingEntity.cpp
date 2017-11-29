//
// Created by acurr on 11/20/2017.
//

#include "LivingEntity.h"
LivingEntity::LivingEntity(std::string name, RaceName raceName, std::string sex, std::string description,
                           Profession profession, EntityStats entityStats, Inventory inventory, WornGear wornGear) {
    this->profession = profession;
    this->stats = entityStats;
    this->inventory = inventory;
    this->wornGear = wornGear;
}

LivingEntity::LivingEntity() {
}

int LivingEntity::getMaxLevel() {
    return MAX_LEVEL;
}

void LivingEntity::printAblities() {
    for (ActiveAbility a : profession.getUnlockedActiveAbilities()) {
        if (!(a.getType().toString() == AbilityType::PASSIVE.toString())) {
            //System.out.println(a.getName());
        }

    }

}

void LivingEntity::receiveDamage(Damage d) {
    stats.getHealth();
    d.getDamage();
    stats.getHealth().setCurrent(stats.getHealth().getCurrent() - d.getDamage());
}

bool LivingEntity::equip(Jewelry j) {
    if (j.getLevel() > stats.getLevel()) {
        return false;
    } else {
        std::vector<EntityStatName> statsAffected = j.getStatsAffected();
        Jewelry old;
        if (j.getSlot().toString() == WornSlot::NECK.toString()) {
            old = (Jewelry) wornGear.getGear()[WornSlot::NECK.getSlotNumber()];
            wornGear.getGear()[WornSlot::NECK.getSlotNumber()] = j;
        } else {
            old = (Jewelry) wornGear.getGear()[WornSlot::RING.getSlotNumber()];
            wornGear.getGear()[WornSlot::RING.getSlotNumber()] = j;
        }
        if (old.toString() != "")
            inventory.add(old);
        for (EntityStatName name : statsAffected) {
            stats.getStat(name).addListOfBonuses(j.getBonusesStat(name));
        }
        return true;
    }
}

bool LivingEntity::pickUp(Item i) {
    return inventory.add(i);
}

void LivingEntity::consume(Potion p) {
    std::vector<EntityStat> stats = p.getStats();
    for (EntityStat stat : stats) {
        EntityStatName name = stat.getStatName();
        double percentValue = (1 + p.getPercentAmount()) * this->stats.getStat(name).getMax();

        Buff buff = Buff(-1, p.getPercentAmount(), p.getFlatAmount(), stat, false);
        stat.addBonus(buff);

    }
    int index = inventory.getIndexOf(p);
    if (index != -1) {
        if (inventory.getInv()[index].getStackCount() > 1)
            inventory.getInv()[index].setStackCount(inventory.getInv()[index].getStackCount() - 1);
        else
            inventory.getInv()[index] = Item();
    }
}

double LivingEntity::getBasicAttackDamage() {
    Weapon weapon;
    double basicDamage = 1;
    bool hasWeapon = !wornGear.slotIsEmpty(WornSlot::MAINHAND);
    if (hasWeapon) {
        weapon = (Weapon) wornGear.getFromSlot(WornSlot::MAINHAND);
        basicDamage = weapon.getMinDamage() +
                      (weapon.getMaxDamage() - weapon.getMinDamage()) * RandomNumber.random.nextDouble();
    }
    basicDamage += (stats.getStrength().getCurrent() / 100) * basicDamage;
    return basicDamage;
}

double LivingEntity::getWeaponElementalValue() {
    double elementalValue = 0;
    Weapon weapon = (Weapon) wornGear.getFromSlot(WornSlot::MAINHAND);
    int level = weapon.getLevel();
    double levelRatio = (double) level / Gear::getMAXLEVEL();
    ElementalType type = weapon.getElementalType();
    switch (type) {
        case NONE:
            elementalValue = 0;
            break;
        case LIGHT:
            elementalValue = levelRatio * ElementalType.getLightScaling();
            break;
        case DARK:
            elementalValue = levelRatio * ElementalType.getDarkScaling();
            break;
        case FIRE:
            elementalValue = levelRatio * ElementalType.getFireScaling();
            break;
        case FROST:
            elementalValue = levelRatio * ElementalType.getFrostScaling();
    }
    return elementalValue;
}

double *LivingEntity::getArmorElementalValues() {
    double lightTotal, darkTotal, fireTotal, frostTotal;
    double *values = new double[4];
    lightTotal = darkTotal = fireTotal = frostTotal = 0;
    Gear *gear = wornGear.getGear();
    for (Gear g : gear) {
        ElementalType type;
        switch (g.getSlot()) {
            case HEAD:
            case NECK:
            case CHEST:
            case GLOVES:
            case LEGS:
            case FEET:
            case OFFHAND:
                type = ((Armor) g).getElementalType();
                double levelRatio = ((double) g.getLevel() / Gear::getMAXLEVEL());
                switch (type) {
                    case LIGHT:
                        lightTotal += levelRatio * ElementalType.getLightScaling();
                        break;
                    case DARK:
                        darkTotal += levelRatio * ElementalType.getDarkScaling();
                        break;
                    case FIRE:
                        fireTotal += levelRatio * ElementalType.getFireScaling();
                        break;
                    case FROST:
                        frostTotal += levelRatio * ElementalType.getFrostScaling();
                }
                break;
        }
    }
    double reducer = .25;
    lightTotal *= reducer;
    darkTotal *= reducer;
    fireTotal *= reducer;
    frostTotal *= reducer;
    values[0] = lightTotal;
    values[1] = darkTotal;
    values[2] = fireTotal;
    values[3] = frostTotal;
    return values;
}

EntityStats LivingEntity::getStats() {
    return stats;
}

void LivingEntity::setStats(EntityStats stats) {
    this->stats = stats;
}

Profession LivingEntity::getProfession() {
    return this->profession;
}

void LivingEntity::setProfession(Profession profession) {
    this->profession = profession;
}

WornGear LivingEntity::getWornGear() {
    return this->wornGear;
}

void LivingEntity::setWornGear(WornGear wornGear) {
    this->wornGear = wornGear;
}

Inventory LivingEntity::getInventory() {
    return this->inventory;
}

void LivingEntity::setInventory(Inventory inventory) {
    this->inventory = inventory;
}

std::string LivingEntity::getName() {
    return this->name;
}

void LivingEntity::setName(std::string name) {
    this->name = name;
}

RaceName LivingEntity::getRaceName() {
    return this->raceName;
}

std::string LivingEntity::getSex() {
    return this->sex;
}

void LivingEntity::setRaceName(RaceName raceName) {
    this->raceName = raceName;
}

void LivingEntity::setSex(std::string sex) {
    this->sex = sex;
}

std::string LivingEntity::getDescription() {
    return this->description;
}

void LivingEntity::setDescription(std::string description) {
    this->description = description;
}

std::string LivingEntity::toString() {
    return this->name;
}

void LivingEntity::consume(Food f) {
    EntityStat health = stats.getHealth();
    if (health.getCurrent() + f.getHealAmount() > health.getMax()) {
        health.setCurrent(health.getMax());
    } else {
        health.setCurrent(health.getCurrent() + f.getHealAmount());
    }
    int index = inventory.getIndexOf(f);
    if (index != -1) {
        if (inventory.getInv()[index].getStackCount() > 1)
            inventory.getInv()[index].setStackCount(inventory.getInv()[index].getStackCount() - 1);
        else
            inventory.getInv()[index] = Item();
    }
}

bool LivingEntity::equip(Weapon w) {
    bool twoHanded = w.getType().isTwoHanded();
    int index = inventory.getIndexOf(w);
    if (index != -1)
        inventory.getInv()[index] = Item();
    WornSlot destination = WornSlot::MAINHAND;
    if (w.getLevel() > stats.getLevel()) {
        return false;
    } else if (twoHanded) {
        if (inventory.isFull() && !wornGear.slotIsEmpty(WornSlot::MAINHAND) &&
            !wornGear.slotIsEmpty(WornSlot::OFFHAND))
            return false;
        else {
            Weapon oldMH = (Weapon) wornGear.getFromSlot(WornSlot::MAINHAND);
            Weapon oldOH = (Weapon) wornGear.getFromSlot(WornSlot::OFFHAND);
            if (oldMH != null)
                inventory.add(oldMH);
            if (oldOH != null)
                inventory.add(oldOH);
            wornGear.getGear()[destination.getSlotNumber()] = w;
        }
    } else {
        if (!wornGear.slotIsEmpty(WornSlot::MAINHAND) && !wornGear.slotIsEmpty(WornSlot::OFFHAND)) {
            Weapon old = (Weapon) wornGear.getFromSlot(WornSlot::MAINHAND);
            if (old != null)
                inventory.add(old);
        } else if (!wornGear.slotIsEmpty(WornSlot::MAINHAND)) {
            destination = WornSlot::OFFHAND;
        }
        wornGear.getGear()[destination.getSlotNumber()] = w;
    }
    return true;
}

bool LivingEntity::equip(Gear g) {
    int slot = g.getSlot().getSlotNumber();
    if (g.getLevel() > stats.getLevel()) {
        return false;
    } else {
        Gear old = wornGear.getGear()[slot];
        wornGear.getGear()[slot] = g;
        int index = inventory.getIndexOf(g);
        if (index != -1)
            inventory.getInv()[index] = Item();
        if (old.getName() != "") {
            inventory.add(old);
        }
        return true;
    }
}
