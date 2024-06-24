#include "priest.h"
#include <cstdlib>
#pragma once

void Priest::show_stats()
{
    character::show_stats();
    cout << getSlots() << endl;   
}

void Priest::show_abilities()
{
    cout << "1.Heal - heals a single target - costs up to 1 spell slot!\n";
    cout << "2.Mass heal - heals all party members - costs 2 spell slots!\n";
}


void Priest::heal(character* target)
{
    int h;
    if(getSlots() <= 0)
    {
        cout << getName() << " is tired... their spells are weaker \n " << endl;
        h = 3 * getInt();
    }
    else
    {
        cout << getName() << " strengthens their spell with a word of power! \n " << endl;
        h = 5 * getInt();
        setSlots(getSlots() - 1);
    }
    cout << getName() << " heals " << target->getName() << " for " << h << " health! \n" << endl;
    target->setHp(target->getHp() + h); 
}

void Priest::mass_heal(character** target, int target_count)
{
    if(getSlots() <= 2)
    {
        cout << getName() << " is tired... the spell fails! \n " << endl;
        return;
    }

    int h = 4 * getInt();
    setSlots(getSlots() - 3);
    cout << getName() << " heals manny people for " << h << " health! \n" << endl;
    for(int i=0;i<target_count;i++)
    {
        target[i]->setHp(target[i]->getHp() + h);
    }

}
