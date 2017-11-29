//
// Created by acurr on 11/19/2017.
//

#include "Item.h"

/**
 * Created by Adam on 10/22/2015.
 * Class Description: Describes a generic item that can be held in the inventory.
 */

Item::Item() {
    setName("");
    setDescription("");
    stackable = 1;
}

Item::Item(std::string name, std::string description, bool nstackable) {
    setName(name);
    setDescription(description);
    stackable = nstackable;
}

/************* Getters and Setters *************/

int Item::getStackCount() {
    return stackCount;
}

void Item::setStackCount(int nstackCount) {
    stackCount = nstackCount;
}

bool Item::isStackable() {
    return stackable;
}

void Item::setStackable(bool nstackable) {
    stackable = nstackable;
    if (!stackable)
        stackCount = 1;
}

bool Item::operator==(Item item) {
    return getName() == item.getName();
}

std::string Item::toString() {
    return name;
}
