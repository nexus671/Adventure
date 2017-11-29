//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_WORNSLOT_H
#define FINALPROJECT_WORNSLOT_H

#include <string>

class WornSlot {
public:
    // Enum value DECLARATIONS - they are defined later
    static const WornSlot HEAD;
    static const WornSlot NECK;
    static const WornSlot CHEST;
    static const WornSlot MAINHAND;
    static const WornSlot OFFHAND;
    static const WornSlot GLOVES;
    static const WornSlot RING;
    static const WornSlot LEGS;
    static const WornSlot FEET;
    static const WornSlot AMMO;

private:
    int slot;
    std::string lowercase;

public:
    WornSlot(int nslot);

    static WornSlot getSlotTitle(int slotNumber);

    int getSlotNumber() const;

    std::string toString() const;
};

// Enum value DEFINITIONS
// The initialization occurs in the scope of the class,
// so the private Planet constructor can be used.


// ...
#endif //FINALPROJECT_WORNSLOT_H
