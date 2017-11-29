//
// Created by acurr on 11/20/2017.
//

#include "RaceName.h"

RaceName::RaceName() {
    lowercase = "";
}

RaceName::RaceName(int index) {
    switch (index) {
        case 0:
            lowercase = "human";
            break;
        case 1:
            lowercase = "elf";
            break;
        case 2:
            lowercase = "orc";
            break;
        case 3:
            lowercase = "dwarf";
            break;
        case 4:
            lowercase = "gnome";
            break;
        case 5:
            lowercase = "catfolk";
            break;
        default:
            lowercase = "";
    }
}


std::string RaceName::toString() {
    return lowercase;
}

const RaceName RaceName::HUMAN = RaceName(0);
const RaceName RaceName::ELF = RaceName(1);
const RaceName RaceName::ORC = RaceName(2);
const RaceName RaceName::DWARF = RaceName(3);
const RaceName RaceName::GNOME = RaceName(4);
const RaceName RaceName::CATFOLK = RaceName(5);

