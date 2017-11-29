//
// Created by acurr on 11/27/2017.
//

#ifndef FINALPROJECT_ABLITITYRANGE_H
#define FINALPROJECT_ABLITITYRANGE_H

#include <string>


class AbilityRange {
    static const AbilityRange NONE;
    static const AbilityRange TOUCH;
    static const AbilityRange SMALL;
    static const AbilityRange MEDIUM;
    static const AbilityRange LARGE;
private:
    int radius;
    std::string name;

    AbilityRange(int r, std::string n);

public:
    int getRadius();

    std::string getName();
};


#endif //FINALPROJECT_ABLITITYRANGE_H
