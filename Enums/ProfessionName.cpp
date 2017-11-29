//
// Created by acurr on 11/20/2017.
//

#include "ProfessionName.h"


ProfessionName::ProfessionName(int index) {
    switch (index) {
        case 0:
            lowercase = "barbarian";
            break;
        case 1:
            lowercase = "bard";
            break;
        case 2:
            lowercase = "cleric";
            break;
        case 3:
            lowercase = "druid";
            break;
        case 4:
            lowercase = "fighter";
            break;
        case 5:
            lowercase = "paladin";
            break;
        case 6:
            lowercase = "ranger";
            break;
        case 7:
            lowercase = "rogue";
            break;
        case 8:
            lowercase = "sorcerer";
            break;
        default:
            lowercase = "";
    }
}

std::string ProfessionName::toString() {
    return lowercase;
}

const ProfessionName ProfessionName::BARBARIAN = ProfessionName(0);
const ProfessionName ProfessionName::BARD = ProfessionName(1);
const ProfessionName ProfessionName::CLERIC = ProfessionName(2);
const ProfessionName ProfessionName::DRUID = ProfessionName(3);
const ProfessionName ProfessionName::FIGHTER = ProfessionName(4);
const ProfessionName ProfessionName::PALADIN = ProfessionName(5);
const ProfessionName ProfessionName::RANGER = ProfessionName(6);
const ProfessionName ProfessionName::ROGUE = ProfessionName(7);
const ProfessionName ProfessionName::SORCERER = ProfessionName(8);