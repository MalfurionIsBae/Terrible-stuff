#include "dragon.h"
#pragma once

void Dragon::show_abilities()
{
    cout << "1.Swipe - Asmodeus swipes at the heroes with his giant claws! \n";
    cout << "2.Flame breath - Asmodeus exhales flames at adventurers! \n";
}

void Dragon::swipe(Party& team)
{
    srand(time(nullptr));
    int i = rand()%team.getPartySize();
    int dmg = getStr() + getAgi();
    cout << endl << "Asmodeus claws his target for " << dmg << " damage! \n" << endl;

    character* hero = team.getMember(i);
    hero->setHp(hero->getHp() - dmg + hero->getArmor());
}

void Dragon::flame_breath(Party& team)
{
    int dmg = 2*getInt();
    cout << endl << "Asmodeus deals " << dmg << " damage to the party with his fiery breath! \n" << endl;
    
    for(int i=0;i<team.getPartySize();i++)
    {
        character* hero = team.getMember(i);
        if(hero != nullptr && hero->is_alive())
        {
            hero->setHp(hero->getHp() - dmg + hero->getArmor());
        }
    }
}
