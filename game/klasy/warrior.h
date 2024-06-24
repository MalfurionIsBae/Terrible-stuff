#include "character.h"
#pragma once

class Warrior : public character
{
private : 
    int rage;
public :
    Warrior( int hp,int armor,int dodge,int strength,int agility,int intellect,string name ) 
      : character(hp, armor, dodge, strength, agility, intellect, name), rage(0) { setKlass("Warrior"); };
    Warrior() : Warrior(0,0,0,0,0,0,"x") {};

    int getRage() { return rage; };
    void setRage(int new_rage);
    void show_stats();
    void show_abilities();

    void bash(character* target);
    void reckless_strike(character* target);
    void overpower(character* target);
};