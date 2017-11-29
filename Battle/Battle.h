//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_BATTLE_H
#define FINALPROJECT_BATTLE_H


#include "../RPGObject.h"
#include "../Entities/LivingEntity.h"
#include "../Abilities/ActiveAbility.h"
#include "../Entities/SubTypes/Monster.h"
#include "../Entities/SubTypes/Player.h"

class Battle : public RPGObject {
private:
    Player player;
    Monster *monsters;
    BattleGrid grid;

public:
    Battle(Player p, Monster *monsters, BattleGrid b) {
        player = p;
        this->monsters = monsters;
        grid = b;
    }

    void ApplyAbility(ActiveAbility ability, std::vector<LivingEntity> targets, LivingEntity caster) {

    }

    Player getPlayer() {
        return player;
    }

    void setPlayer(Player player) {
        this->player = player;
    }

    Monster *getMonsters() {
        return monsters;
    }

    void setMonsters(Monster *monsters) {
        this->monsters = monsters;
    }

    BattleGrid getGrid() {
        return grid;
    }

    void setGrid(BattleGrid grid) {
        this->grid = grid;
    }
};


#endif //FINALPROJECT_BATTLE_H
