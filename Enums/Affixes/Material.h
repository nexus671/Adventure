//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_MATERIAL_H
#define FINALPROJECT_MATERIAL_H

#include <string>

class Material {
public:
    // Enum value DECLARATIONS - they are defined later
    static const Material BRONZE;
    static const Material IRON;
    static const Material STEEL;
    static const Material MITHRIL;
    static const Material GOLDEN;
    static const Material LAMINAR;
    static const Material PLATED;
    static const Material OBSIDIAN;
    static const Material CRYSTAL;
    static const Material DRACONIC;

    Material(int level);

private:
    int level;
    std::string lowercase;
    double avgDamage;
    double avgDefense;
    bool metallic;

public:
    int getLevel();

    void setLevel(int level);

    std::string getLowercase();

    double getAvgDamage();

    double getAvgDefense();

    bool isMetallic();

    std::string toString();
};


#endif //FINALPROJECT_MATERIAL_H
