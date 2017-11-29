//
// Created by acurr on 11/20/2017.
//

#include "Material.h"
#include "../../Stats/ScalingCurve.h"

Material::Material(int level) {
    this->level = level;

    avgDamage = ScalingCurve::getDamageScaling(level);
    avgDefense = ScalingCurve::getDamageScaling(level);
    metallic = true;
}

int Material::getLevel() {
    return level;
}

void Material::setLevel(int level) {
    this->level = level;
}

std::string Material::getLowercase() {
    return lowercase;
}

double Material::getAvgDamage() {
    return avgDamage;
}

double Material::getAvgDefense() {
    return avgDefense;
}

bool Material::isMetallic() {
    return metallic;
}

std::string Material::toString() {
    return lowercase;
}

const Material Material::BRONZE = Material(1);
const Material Material::IRON = Material(2);
const Material Material::STEEL = Material(3);
const Material Material::MITHRIL = Material(4);
const Material Material::GOLDEN = Material(5);
const Material Material::LAMINAR = Material(8);
const Material Material::PLATED = Material(10);
const Material Material::OBSIDIAN = Material(12);
const Material Material::CRYSTAL = Material(16);
const Material Material::DRACONIC = Material(21);