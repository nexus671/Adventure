//
// Created by acurr on 11/19/2017.
//

#include "Inventory.h"

/**

 * Class Description: The inventory system for the player.
 */
/************* Constructors *************/
Inventory::Inventory() {
    inv = new Item[size];
}

/************* Specific Methods *************/

int Inventory::getSIZE() {
    return size;
}

/**
 * Adds an item to the inventory. If an item is stackable and already contained in the
 * inventory, it's added to that stack.
 * @param i The item to be added.
 * @return True if the item was added successfully, false if inventory was full.
 */
bool Inventory::add(Item i) {
    int indexInArray = getIndexOf(i);
    if (i.isStackable() && indexInArray != -1) {
        inv[indexInArray].setStackCount(inv[indexInArray].getStackCount() + i.getStackCount());
        return true;
    } else if (!isFull()) {
        int index = getFirstEmptySpace();
        inv[index] = i;
        return true;
    } else {
        return false;
    }
}

/**
 * @return The index of the first null object in the array, or -1 if the array is full.
 */
int Inventory::getFirstEmptySpace() {
    for (int i = 0; i < size; i++) {
        if (inv[i].getName().empty()) {
            return i;
        }
    }
    return -1;
}

/**
 * Gets the index of an item in the inventory.
 * @param i The item to be checked for.
 * @return The first index the item is located at, or -1 if the item is not
 * found in the inventory.
 */
int Inventory::getIndexOf(Item i) {
    for (int count = 0; count < size; count++) {
        if (i == inv[count]) {
            return count;
        }
    }
    return -1;
}

/**
 * Checks whether the inventory contains a specific item.
 *
 * @param i The item to be checked.
 * @return True if the inventory contains the item somewhere.
 */
bool Inventory::contains(Item i) {
    for (int count = 0; count < size; count++) {
        if (i == inv[count]) {
            return true;
        }
    }
    return false;
}

/**
 * @return True if the inventory is full of items.
 */
bool Inventory::isFull() {
    for (int count = 0; count < size; count++) {
        if (inv[count].getName().empty()) {
            return false;
        }
    }
    return true;
}

/************* Getters *************/

Item *Inventory::getInv() {
    return inv;
}


