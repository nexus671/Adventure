//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_ITEM_H
#define FINALPROJECT_ITEM_H


#include "../RPGObject.h"

class Item : public RPGObject {
protected:
    bool stackable;
    int stackCount;

/************* Constructors *************/

public:
    Item();

    Item(std::string name, std::string description, bool nstackable);

/************* Getters and Setters *************/

    int getStackCount();

    void setStackCount(int nstackCount);

    bool isStackable();

    void setStackable(bool nstackable);

    bool operator==(Item item);

    std::string toString();
};

#endif //FINALPROJECT_ITEM_H
