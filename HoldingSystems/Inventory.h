//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_INVENTORY_H
#define FINALPROJECT_INVENTORY_H


#include "../Items/Item.h"

class Inventory : public RPGObject {
public:
    int size = 20;

    Item *inv;

/************* Constructors *************/
    Inventory();

/************* Specific Methods *************/

    int getSIZE();

/**
 * Adds an item to the inventory. If an item is stackable and already contained in the
 * inventory, it's added to that stack.
 * @param i The item to be added.
 * @return True if the item was added successfully, false if inventory was full.
 */
    bool add(Item i);

/**
 * @return The index of the first null object in the array, or -1 if the array is full.
 */
    int getFirstEmptySpace();

/**
 * Gets the index of an item in the inventory.
 * @param i The item to be checked for.
 * @return The first index the item is located at, or -1 if the item is not
 * found in the inventory.
 */
    int getIndexOf(Item i);

/**
 * Checks whether the inventory contains a specific item.
 *
 * @param i The item to be checked.
 * @return True if the inventory contains the item somewhere.
 */
    bool contains(Item i);

/**
 * @return True if the inventory is full of items.
 */
    bool isFull();

/************* Getters *************/

    Item *getInv();
};


#endif //FINALPROJECT_INVENTORY_H
