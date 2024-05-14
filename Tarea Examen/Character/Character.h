//
// Created by Victor Navarro on 13/02/24.
//

#ifndef RPG_CHARACTER_H
#define RPG_CHARACTER_H
#include<string>
#include "../Combat/Action.h"
//#define ROJO "\033[31m";
//#define VERDE "\033[32m";
//#define RESET "\033[0m";

using namespace std;

class Character {
protected:
    char name[30];
    int health;
    int attack;
    int defense;
    int speed;
    bool isPlayer;
    bool fleed;
    int experience;
    int level;

public:
    Character(char* _name, int _health, int _attack, int _defense, int _speed, bool _isPlayer, int _experience, int _level);

    virtual void doAttack(Character *target) = 0;
    virtual void takeDamage(int damage) = 0;

    void setName(char*);
    char* getName();
    void setHealth(int);
    int getHealth();
    void setAttack(int);
    int getAttack();
    void setDefense(int);
    int getDefense();
    void setSpeed(int);
    int getSpeed();
    string toString();
    bool getIsPlayer();
    bool hasFleed();
    int getExperience();
    int getLevel();
    void setEmax(int);
};


#endif //RPG_CHARACTER_H
