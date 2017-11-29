//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_ARMORSTAT_H
#define FINALPROJECT_ARMORSTAT_H

#include <string>
#include "../RPGObject.h"

class ArmorStat : public RPGObject {
private:
    double maxValue;
    double value;

public:
    ArmorStat(std::string name, double maxValue);

    ArmorStat();

    void setMaxValue(double maxValue);

    double getMaxValue();

    void setMaxValue(int maxValue);

    double getValue();

    void setValue(double value);

    std::string toString();
};


#endif //FINALPROJECT_ARMORSTAT_H
