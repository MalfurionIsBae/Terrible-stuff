#include "character.h"
#pragma once

class Mage : public character
{
private : 
    int spell_slots;
public :
    Mage( int hp,int armor,int dodge,int strength,int agility,int intellect,string name ) 
      : character(hp, armor, dodge, strength, agility, intellect, name), spell_slots(7) { setKlass("Mage"); };
    Mage() : Mage(0,0,0,0,0,0,"x") {};

    int getSlots() { return spell_slots; };
    void setSlots(int new_slots) { spell_slots = new_slots; };
    void show_stats();
    void show_abilities();

    void arcane_missile(character* target);
    void inner_focus();
    void fireball(character* target);
};