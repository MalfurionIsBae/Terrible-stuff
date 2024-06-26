#include "character.h"
#pragma once

class Mage : public character
{
private : 
    int spell_slots;
public :
// CONSTRUCTOR
    Mage( int hp,int armor,int dodge,int strength,int agility,int intellect,string name );
    Mage() : Mage(0,0,0,0,0,0,"x") {};

// SPELL SLOTS
    int getSlots() { return spell_slots; };
    void setSlots(int new_slots) { spell_slots = new_slots; };
    void show_stats();

// ABILITIES
    // ARCANE MISSILE
    class arcane_missile : public Ability
    {
      private :
         Mage* mag;
      public :
         arcane_missile(Mage* p) : mag(p) {};
         void use();
         void description();
    };

    // INNER FOCUS
    class inner_focus : public Ability
    {
      private :
         Mage* mag;
      public :
         inner_focus(Mage* p) : mag(p) {};
         void use();
         void description();
    };

    // FIREBALL
    class fireball : public Ability
    {
      private :
         Mage* mag;
      public :
         fireball(Mage* p) : mag(p) {};
         void use();
         void description();
    };
};