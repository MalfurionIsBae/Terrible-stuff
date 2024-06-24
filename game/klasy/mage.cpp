#include "mage.h"
#include <cstdlib>
#pragma once

void Mage::show_stats()
{
    character::show_stats();
    cout << getSlots() << endl;   
}

void Mage::show_abilities()
{
    cout << "1.Arcane missile - a magical attack that ignores armor - costs 1 spell slot!\n";
    cout << "2.Inner focus - the mage focuses to regain spell slots!\n";
    cout << "3.Fireball - a powerful magical attack that ignores armor - costs 2 spell slots \n";
}

void Mage::inner_focus()
{
    srand(time(nullptr));
    int p = rand() % 3 + 1;
    cout << getName() << " focus lets them recover " << p << " slots! \n" << endl;
    setSlots(p);
}

void Mage::arcane_missile(character* target)
{
    if(getSlots() <= 0)
    {
        cout << getName() << " tries to cast arcane_missile... but failse \n " << endl;
        return;
    }

    int dmg = 5 * getInt();
    setSlots(getSlots() - 1);
    cout << getName() << " shoots out a missile that deals " << dmg << " damage! \n" << endl;
    target->setHp(target->getHp() - dmg); 
}

void Mage::fireball(character* target)
{
    if(getSlots() <= 1)
    {
        cout << getName() << " fireball... but failse \n " << endl;
        return;
    }

    int dmg = 8 * getInt();
    setSlots(getSlots() - 2);
    cout << getName() << " hurls a huge ball pf fire for " << dmg << " damage! \n" << endl;
    target->setHp(target->getHp() - dmg); 
}

