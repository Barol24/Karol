//
// Created by Victor Navarro on 13/02/24.
//

#ifndef RPG_PLAYER_H
#define RPG_PLAYER_H

#include "../Character/Character.h"
#include "../Enemy/Enemy.h"
#include "../Combat/Action.h"
#include <string>
struct Action;
class Enemy;

class Player: public Character {

private:
    int level;


public:
    string nacionalidad  = "";
    int poderMagico = 0;
    void mostrar();
    Player(char* _name, int _health, int _attack, int _defense, int _speed, int _poderMagico, string _nacio);
    Player(char* _name , int _health, int _attack, int _defense, int _speed, int poder_, char* nacio_, bool _isPlayer, int _experience, int _level);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    char* serialize ();
    static const unsigned int BUFFER_SIZE  = sizeof (name) + sizeof (health) + sizeof (attack) + sizeof (defense) + sizeof (speed) + sizeof (isPlayer) + sizeof (experience) + sizeof (level);

    static Player* unserialize (char* buffer);

    Character* getTarget(vector<Enemy*> enemies);

    void flee(vector<Enemy*> enemies);
    void emote();
    void levelUp();
    void gainExperience(int exp);
    void printStatsOnLevelUp();

    //Podemos hacer que este vector sea polimorfico?
    Action takeAction(vector<Enemy*> enemies);
    int experience;

private:
    char buffer[Player::BUFFER_SIZE];

};


#endif //RPG_PLAYER_H
