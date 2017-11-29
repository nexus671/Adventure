//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_RACENAME_H
#define FINALPROJECT_RACENAME_H

#include <string>

class RaceName {
    static const RaceName HUMAN;
    static const RaceName ELF;
    static const RaceName ORC;
    static const RaceName DWARF;
    static const RaceName GNOME;
    static const RaceName CATFOLK;

public:
    std::string lowercase;

    RaceName();

    RaceName(int index);

public:
    std::string toString();
};


#endif //FINALPROJECT_RACENAME_H
