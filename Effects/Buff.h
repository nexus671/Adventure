//
// Created by acurr on 11/19/2017.
//

#ifndef FINALPROJECT_BUFF_H
#define FINALPROJECT_BUFF_H


#include "Effect.h"
#include "../Stats/EntityStats/EntityStat.h"


class Buff : public Effect {
private:
    int duration;
    double magnitude;
    int value;
    EntityStat stat;
    EntityStatName statName;
    bool debuff;

public:
    Buff();

    Buff(int duration, double magnitude, int value, EntityStat stat, bool debuff);

    Buff(int duration, int value, EntityStat stat, bool debuff);

    Buff(int duration, double magnitude, EntityStat stat, bool debuff);

    Buff(double percent, int flat, EntityStatName stat, bool debuff);

    Buff(int flat, EntityStatName stat, bool debuff);

    Buff(double percent, EntityStatName stat, bool debuff);

    void assignDescription();

    EntityStatName getStatName();

    void setStatName(EntityStatName statName);

    void onTimerEnd();

    int getDuration();

    void setDuration(int duration);

    double getMagnitude();

    void setMagnitude(double magnitude);

    double getValue();

    void setValue(int value);

    EntityStat getStat();

    void setStat(EntityStat stat);

    bool isDebuff();

    void setDebuff(bool debuff);

    bool operator==(Buff buff);
};


#endif //FINALPROJECT_BUFF_H
