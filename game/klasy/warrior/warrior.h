#include "character.h"
#pragma once

class Warrior : public character
{
private : 
    int rage;
public :
// CONSTRUCTOR 
    Warrior( int hp,int armor,int dodge,int strength,int agility,int intellect,string name );
    Warrior() : Warrior(0,0,0,0,0,0,"x") {};

// RAGE
    int getRage() { return rage; };
    void setRage(int new_rage);
    void show_stats();

// ZDOLNOSCI
    // BASH
    class bash : public Ability
    {
      private :
         Warrior* warr;
      public :
         bash(Warrior* p) : warr(p) {}; 
         void description();
         void use(); 
    };
    
    // RECKLESS STRIKE
    class reckless_strike : public Ability
    {
      private :
         Warrior* warr;
      public :
         reckless_strike(Warrior* p) : warr(p) {};
         void description();
         void use(); 
    };

    // OVERPOWER
    class overpower : public Ability
    {
      private :
         Warrior* warr;
      public :
         overpower(Warrior* p) : warr(p) {};
         void description();
         void use(); 
    };
};