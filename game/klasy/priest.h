#include "character.h"
#pragma once

class Priest : public character
{
private : 
    int spell_slots;
public :
    Priest( int hp,int armor,int dodge,int strength,int agility,int intellect,string name ) 
      : character(hp, armor, dodge, strength, agility, intellect, name), spell_slots(14) { setKlass("Priest"); };
    Priest() : Priest(0,0,0,0,0,0,"x") {};

    int getSlots() { return spell_slots; };
    void setSlots(int new_slots) { spell_slots = new_slots; };
    void show_stats();
    void show_abilities();

    void heal(character* target);
    void mass_heal(character** target, int target_count);
};