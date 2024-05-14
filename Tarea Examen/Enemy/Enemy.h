//
// Created by Victor Navarro on 13/02/24.
//

#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H
#include "../Character/Character.h"
#include "../Player/Player.h"
#include "../Combat/Action.h"

struct Action;
class Player;

class Enemy: public Character {
public:
    int health;
    int experience;
    int maxHealth;
    Enemy(char* name, int health, int attack, int defense, int speed);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    void incrementarEstadisticas (int);
    Character* getTarget(vector<Player*> teamMembers);
    Action takeAction(vector<Player*> player);
};


#endif //RPG_ENEMY_H
