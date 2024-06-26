#include "mage.h"
#include <cstdlib>
#pragma once

Mage::Mage( int hp,int armor,int dodge,int strength,int agility,int intellect,string name ) 
      : character(hp, armor, dodge, strength, agility, intellect, name), spell_slots(7) 
{ 
    setKlass("Mage"); 
    Ability* ab1 = new arcane_missile(this);
    Ability* ab2 = new inner_focus(this);
    Ability* ab3 = new fireball(this);

    abilities.push_back(ab3);
    abilities.push_back(ab2);
    abilities.push_back(ab1);
};

void Mage::show_stats()
{
    character::show_stats();
    cout << getSlots() << endl;   
}

void Mage::arcane_missile::use()
{
    if(mag->getSlots() <= 0)
    {
        cout << mag->getName() << " tries to cast arcane_missile... but failse \n " << endl;
        return;
    }

    int dmg = 5 * mag->getInt();
    mag->setSlots(mag->getSlots() - 1);
    cout << mag->getName() << " shoots out a missile that deals " << dmg << " damage! \n" << endl;
    mag->targets->setHp(mag->targets->getHp() - dmg); 
}

void Mage::arcane_missile::description()
{
    cout << "Arcane missile - a magical attack that ignores armor - costs 1 spell slot!\n";
}

void Mage::inner_focus::use()
{
    srand(time(nullptr));
    int p = rand() % 3 + 1;
    cout << mag->getName() << " focus lets them recover " << p << " slots! \n" << endl;
    mag->setSlots(p);
}

void Mage::inner_focus::description()
{
    cout << "Inner focus - the mage focuses to regain spell slots!\n";
}

void Mage::fireball::use()
{
    if(mag->getSlots() <= 1)
    {
        cout << mag->getName() << " tries to fireball... but fails \n " << endl;
        return;
    }

    int dmg = 8 * mag->getInt();
    mag->setSlots(mag->getSlots() - 2);
    cout << mag->getName() << " hurls a huge ball pf fire for " << dmg << " damage! \n" << endl;
    mag->targets->setHp(mag->targets->getHp() - dmg); 
}

void Mage::fireball::description()
{
    cout << "Fireball - a powerful magical attack that ignores armor - costs 2 spell slots \n";
}
