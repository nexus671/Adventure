//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_PROFESSIONNAME_H
#define FINALPROJECT_PROFESSIONNAME_H

#include <string>

class ProfessionName {
    static const ProfessionName BARBARIAN;
    static const ProfessionName BARD;
    static const ProfessionName CLERIC;
    static const ProfessionName DRUID;
    static const ProfessionName FIGHTER;
    static const ProfessionName PALADIN;
    static const ProfessionName RANGER;
    static const ProfessionName ROGUE;
    static const ProfessionName SORCERER;

public:
    std::string lowercase;

    ProfessionName(int index);


public:
    std::string toString();
};


#endif //FINALPROJECT_PROFESSIONNAME_H
