//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_JEWELRYMETAL_H
#define FINALPROJECT_JEWELRYMETAL_H

#include <string>

class JewelryMetal {
    static const JewelryMetal COPPER;
    static const JewelryMetal SILVER;
    static const JewelryMetal GOLD;


private:
    double powerModifier;
    std::string lowercase;

public:
    double getPowerModifier();


    std::string toString();

    JewelryMetal(double powerModifier, int n);
};


#endif //FINALPROJECT_JEWELRYMETAL_H
