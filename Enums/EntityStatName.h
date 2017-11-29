//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_ENTITYSTATNAME_H
#define FINALPROJECT_ENTITYSTATNAME_H

#include <string>

class EntityStatName {
public:
// Enum value DECLARATIONS - they are defined later
    static const EntityStatName HEALTH;
    static const EntityStatName MANA;
    static const EntityStatName STRENGTH;
    static const EntityStatName CONSTITUTION;
    static const EntityStatName WISDOM;

private:
    std::string lowercase;

public:
    EntityStatName();

    EntityStatName(int index);

public:
    std::string toString();

    bool operator==(EntityStatName entityStatName);
};

// Enum value DEFINITIONS
// The initialization occurs in the scope of the class,
// so the private Planet constructor can be used.



#endif //FINALPROJECT_ENTITYSTATNAME_H
