// Created by acurr on 11/19/2017.
//
#include "Buff.h"


Buff::Buff() {

};

Buff::Buff(int duration, double magnitude, int value, EntityStat stat, bool debuff) {
    this->duration = duration;
    this->magnitude = magnitude;
    this->value = value;
    this->debuff = debuff;
    this->stat = stat;
    this->statName = stat.getStatName();
    assignDescription();
}

Buff::Buff(int duration, int value, EntityStat stat, bool debuff) {
    this->duration = duration;
    this->value = value;
    this->debuff = debuff;
    this->stat = stat;
    magnitude = 1;
    statName = stat.getStatName();
    assignDescription();
}

Buff::Buff(int duration, double magnitude, EntityStat stat, bool debuff) {
    this->duration = duration;
    this->magnitude = magnitude;
    this->debuff = debuff;
    this->stat = stat;
    value = 0;
    statName = stat.getStatName();
    assignDescription();
}

Buff::Buff(double percent, int flat, EntityStatName stat, bool debuff) {
    this->magnitude = percent;
    this->value = flat;
    this->debuff = debuff;
    this->statName = stat;
    duration = -1;
    assignDescription();
}

Buff::Buff(int flat, EntityStatName stat, bool debuff) {
    this->value = flat;
    this->debuff = debuff;
    this->statName = stat;
    duration = -1;
    magnitude = 1;
    assignDescription();
}

Buff::Buff(double percent, EntityStatName stat, bool debuff) {
    this->magnitude = percent;
    this->debuff = debuff;
    this->statName = stat;
    value = 0;
    duration = -1;
    assignDescription();
}

void Buff::assignDescription() {
    if (debuff)
        description = "Decreases enemy's";
    else
        description = "Increases player's";
    description += " " + statName.toString() + " by ";
    bool pctBuff = magnitude != 1;
    bool flatBuff = value != 0;
    if (pctBuff) {
        if (magnitude > 1)
            description += ((magnitude - 1) * 100);
        else
            description += magnitude;
        description += "%";
    }
    if (pctBuff && flatBuff) {
        description += " plus ";
    }
    if (flatBuff) {
        if (value > 0)
            description += value;
        else
            description += (-value);
    }
    if (duration == -1) {
        description += " for " + duration + std::string(" turns.");
    } else {
        if (debuff)
            description += " each turn for the remainder of a battle.";
        else
            description += " while the item is equipped.";
    }
}

EntityStatName Buff::getStatName() {
    return statName;
}

void Buff::setStatName(EntityStatName statName) {
    this->statName = statName;
}

void Buff::onTimerEnd() {
    stat.removeBonus(*this);
}

int Buff::getDuration() {
    return duration;
}

void Buff::setDuration(int duration) {
    this->duration = duration;
}

double Buff::getMagnitude() {
    return magnitude;
}

void Buff::setMagnitude(double magnitude) {
    this->magnitude = magnitude;
}

double Buff::getValue() {
    return value;
}

void Buff::setValue(int value) {
    this->value = value;
}

EntityStat Buff::getStat() {
    return stat;
}

void Buff::setStat(EntityStat stat) {
    this->stat = stat;
}

bool Buff::isDebuff() {
    return debuff;
}

void Buff::setDebuff(bool debuff) {
    this->debuff = debuff;
}

bool Buff::operator==(Buff buff) {
    return this == &buff;
}