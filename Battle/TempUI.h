//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_TEMPUI_H
#define FINALPROJECT_TEMPUI_H


#include "Battle.h"

class TempUI {
private:
    Battle battle = Battle(nullptr, nullptr, nullptr);

public:
    TempUI(Battle b) {
        battle = b;
        playerTurn();
    }

    void playerTurn() {
        printPlayerMenu();
    }

    void printPlayerMenu() {
        int i = 1;
        std::vector<ActiveAbility> abilities = battle.getPlayer().getProfession().getUnlockedActiveAbilities();
        for (ActiveAbility a : abilities) {
            System.out.println(i + ". " + a.getName());
            i++;
        }
        System.out.println(i + ". View Consumables");
        System.out.print("Enter your choice: ");
        int choice = KBReader.getScanner().nextInt();
        if (choice < i) {
            ActiveAbility ability = abilities.get(choice - 1);
            i = 1;
            for (Monster m : battle.getMonsters()) {
                System.out.println(i + ". " + m.getName());
                i++;
            }
            System.out.println("Select a target: ");
            int targetChoice = KBReader.getScanner().nextInt();
            Monster target = battle.getMonsters()[targetChoice - 1];
            std::vector<Monster> targets;
            targets.push_back(target);
            ability.use(targets);
        }
    }
};


#endif //FINALPROJECT_TEMPUI_H
