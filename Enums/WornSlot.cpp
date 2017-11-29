#include "WornSlot.h"
// Created by acurr on 11/19/2017.
//





WornSlot::WornSlot(int nslot) {
    slot = nslot;
    switch (slot) {
        case 0:
            lowercase = "head";
            break;
        case 1:
            lowercase = "neck";
            break;
        case 2:
            lowercase = "chest";
            break;
        case 3:
            lowercase = "mainhand";
            break;
        case 4:
            lowercase = "offhand";
            break;
        case 5:
            lowercase = "gloves";
            break;
        case 6:
            lowercase = "ring";
            break;
        case 7:
            lowercase = "legs";
            break;
        case 8:
            lowercase = "feet";
            break;
        case 9:
            lowercase = "ammo";
            break;
        default:
            lowercase = "";
    }
}

WornSlot WornSlot::getSlotTitle(int slotNumber) {
    switch (slotNumber) {
        case 0:
            return HEAD;
        case 1:
            return NECK;
        case 2:
            return CHEST;
        case 3:
            return MAINHAND;
        case 4:
            return OFFHAND;
        case 5:
            return GLOVES;
        case 6:
            return RING;
        case 7:
            return LEGS;
        case 8:
            return FEET;
        case 9:
            return AMMO;
    }
}

int WornSlot::getSlotNumber() const {
    return slot;
}

std::string WornSlot::toString() const {
    return lowercase;
}

const WornSlot WornSlot::HEAD = WornSlot(0);
const WornSlot WornSlot::NECK = WornSlot(1);
const WornSlot WornSlot::CHEST = WornSlot(2);
const WornSlot WornSlot::MAINHAND = WornSlot(3);
const WornSlot WornSlot::OFFHAND = WornSlot(4);
const WornSlot WornSlot::GLOVES = WornSlot(5);
const WornSlot WornSlot::RING = WornSlot(6);
const WornSlot WornSlot::LEGS = WornSlot(7);
const WornSlot WornSlot::FEET = WornSlot(8);
const WornSlot WornSlot::AMMO = WornSlot(9);