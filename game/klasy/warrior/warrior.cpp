#include "warrior.h"
#pragma once

Warrior::Warrior( int hp,int armor,int dodge,int strength,int agility,int intellect,string name )
      : character(hp, armor, dodge, strength, agility, intellect, name), rage(0) 
{ 
    setKlass("Warrior"); 
    Ability* ab1 = new bash(this);
    Ability* ab2 = new reckless_strike(this);
    Ability* ab3 = new overpower(this);

    abilities.push_back(ab3);
    abilities.push_back(ab2);
    abilities.push_back(ab1);
};

void Warrior::setRage(int new_rage)
{
    if(new_rage > 100) rage = 100;
    else rage = new_rage;
}

void Warrior::show_stats()
{
    character::show_stats();
    cout << getRage() << endl;   
}


void Warrior::bash::use()
{
    warr->setRage(warr->getRage() + 10);
    int dmg = warr->getStr() + warr->getAgi();
    cout << warr->getName() << " bashes his target for " << dmg << " damage! \n" << endl; 
    warr->targets->setHp(warr->targets->getHp() - dmg + warr->targets->getArmor());
}

void Warrior::bash::description()
{
    cout << "Bash - brutally bash your target and generate rage!\n";
}

void Warrior::reckless_strike::use()
{
    warr->setRage(warr->getRage() + 20);
    warr->setHp(warr->getHp() - 100);
    int dmg = 3*warr->getStr();
    cout << warr->getName() << " attakcs his target recklessly for " << dmg << " damage! \n" << endl; 
    warr->targets->setHp(warr->targets->getHp() - dmg + warr->targets->getArmor());
}

void Warrior::reckless_strike::description()
{
    cout << "Reckless strike - vicous attack that harms the user and generate a lot of rage!\n";
}

void Warrior::overpower::use()
{
    if(warr->getRage() < 25)
    {
        cout << warr->getName() << "tries to muster the fury for a big strike... and fails \n" << endl;
        return; 
    }

    warr->setRage(warr->getRage() - 25);
    int dmg = 4*warr->getStr();
    cout << warr->getName() << " ferociously strikes his foe for " << dmg << " damage! \n" << endl; 
    warr->targets->setHp(warr->targets->getHp() - dmg + warr->targets->getArmor());
}

void Warrior::overpower::description()
{
    cout << "Overpower - a crushing finisher that costs 25 rage!\n";
}
