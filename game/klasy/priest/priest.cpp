#include "priest.h"
#include <cstdlib>
#pragma once

Priest::Priest( int hp,int armor,int dodge,int strength,int agility,int intellect,string name ) 
      : character(hp, armor, dodge, strength, agility, intellect, name), spell_slots(14) 
{ 
    setKlass("Priest"); 
    Ability* ab1 = new heal(this);
    Ability* ab2 = new mass_heal(this);

    abilities.push_back(ab2);
    abilities.push_back(ab1);
};

void Priest::show_stats()
{
    character::show_stats();
    cout << getSlots() << endl;   
}

void Priest::heal::use()
{
    int h;
    if(pr->getSlots() <= 0)
    {
        cout << pr->getName() << " is tired... their spells are weaker \n " << endl;
        h = 3 * pr->getInt();
    }
    else
    {
        cout << pr->getName() << " strengthens their spell with a word of power! \n " << endl;
        h = 5 * pr->getInt();
        pr->setSlots(pr->getSlots() - 1);
    }
    cout << pr->getName() << " heals " << pr->targets->getName() << " for " << h << " health! \n" << endl;
    pr->friendlies[0]->setHp(pr->friendlies[0]->getHp() + h); // FOR NOW HEALS FIRST FRIENDLY - TO BE CHANGED
}

void Priest::heal::description()
{
    cout << "Heal - heals a single target - costs up to 1 spell slot!\n";
}

void Priest::mass_heal::use()
{
    if(pr->getSlots() <= 2)
    {
        cout << pr->getName() << " is tired... the spell fails! \n " << endl;
        return;
    }

    int h = 4 * pr->getInt();
    pr->setSlots(pr->getSlots() - 3);
    cout << pr->getName() << " heals manny people for " << h << " health! \n" << endl;
    for(int i=0;i<pr->f_size;i++)
    {
        pr->friendlies[i]->setHp(pr->friendlies[i]->getHp() + h);
    }

}

void Priest::mass_heal::description()
{
    cout << "Mass heal - heals all party members - costs 2 spell slots!\n";
}