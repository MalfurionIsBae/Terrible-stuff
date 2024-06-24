#include "warrior.h"
#pragma once

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

void Warrior::show_abilities()
{
    cout << "1.Bash - uderz wroga i zdobadz rage!\n";
    cout << "2.Reckless Strike - ryzykowny atak kosztujacy hp ale zadajacy zwiekszone obrazenia!\n";
    cout << "3.Overpower - potezny atak wymagajacy 25 rage\n";
}

void Warrior::bash(character* target)
{
    setRage(getRage() + 10);
    int dmg = getStr() + getAgi();
    cout << getName() << " bashes his target for " << dmg << " damage! \n" << endl; 
    target->setHp(target->getHp() - dmg + target->getArmor());
}

void Warrior::reckless_strike(character* target)
{
    setRage(getRage() + 20);
    setHp(getHp() - 100);
    int dmg = 3*getStr();
    cout << getName() << " attakcs his target recklessly for " << dmg << " damage! \n" << endl; 
    target->setHp(target->getHp() - dmg + target->getArmor());
}

void Warrior::overpower(character* target)
{
    if(getRage() < 25)
    {
        cout << getName() << "tries to muster the fury for a big strike... and fails \n" << endl;
        return; 
    }

    setRage(getRage() - 25);
    int dmg = 4*getStr();
    cout << getName() << " ferociously strikes his foe for " << dmg << " damage! \n" << endl; 
}