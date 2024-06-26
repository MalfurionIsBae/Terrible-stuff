#include "character.h"
#pragma once

class Priest : public character
{
private : 
    int spell_slots;
public :
// CONSTRUCTOR - TO BE MOVED TO CPP
    Priest( int hp,int armor,int dodge,int strength,int agility,int intellect,string name );
    Priest() : Priest(0,0,0,0,0,0,"x") {};

// SPELL SLOTS
    int getSlots() { return spell_slots; };
    void setSlots(int new_slots) { spell_slots = new_slots; };
    void show_stats();

// ABILITIES
    // HEAL
    class heal : public Ability
    {
      private :
         Priest* pr;
      public :
         heal(Priest* p) : pr(p) {};
         void use();
         void description();
    };

    // MASS HEAL
    class mass_heal : public Ability 
    {
      private :
         Priest* pr;
      public :
         mass_heal(Priest* p) : pr(p) {};
         void use();
         void description();
    };
};