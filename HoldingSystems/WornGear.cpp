#include "WornGear.h"


/**
 * Class Description: The array of worn gear for a player or monster.
 */


WornGear::WornGear() {
    size = 9;
}


bool WornGear::contains(Gear g) {
    WornSlot slot = g.getSlot();
    return gear.at(static_cast<unsigned int>(slot.getSlotNumber())) == (g);
}

bool WornGear::slotIsEmpty(WornSlot slot) {
    int index = slot.getSlotNumber();
    return (gear.at(static_cast<unsigned int>(index)).getLevel() == 0);
}


std::vector<Gear> WornGear::getGear() {
    return gear;
}

Gear WornGear::getFromSlot(WornSlot slot) {
    return gear.at(static_cast<unsigned int>(slot.getSlotNumber()));
}

std::string WornGear::toString() {
    std::string str;
    for (int i = 0; i < size; i++) {
        str += WornSlot::getSlotTitle(i).toString() + ": " + gear[i].toString() + "\n";
        i++;
    }
    return str;
}