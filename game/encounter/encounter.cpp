#include "encounter.h"
#pragma once

void Encounter::begin()
{
    srand(time(nullptr));

    heroes.new_party();
    heroes.show_party();

    // TO BE REPLACED WITH A FUNCTION
    for(int i=0;i<heroes.getPartySize();i++)
    {
        character* hero = heroes.getMember(i);
        hero->setFriendlies(heroes.getParty(), heroes.getPartySize());
        hero->setTargets(&boss);
        hero->f_size = heroes.getPartySize();
    }


    cout << "----------------------------------------------------" << endl << "THE FIGHT BEGINS" << endl;
    while(boss.is_alive() && heroes.is_alive())
    {
        if(rand() % 2 == 0) boss.swipe(heroes);
        else boss.flame_breath(heroes);

        for(int i=0;i<heroes.getPartySize();i++)
        {
            character* hero = heroes.getMember(i);
            if(hero == nullptr) { cerr << "Error - party member does not exist \n"; }
            if(hero->is_alive() == false) { cout << hero->getName() << " cannot fight any more! \n" << endl; continue; }
            cout << endl << "IT IS NOW " << hero->getName() <<"'s - " << hero->getKlass() << " TURN \n" << endl;
          
            hero->show_abilities();
            int p;
            while(true)
            {
                cin >> p;
                if(cin.fail() || p < 0 || p >= hero->abilityCount() ) { cerr << "Wrong input! Try again!\n"; continue; }
                break;
            }
            Ability* ab = hero->getAbility(p);
            ab->use();
        }
    }

    if( heroes.is_alive()) cout << endl << "HEROES ARE VICTORIUS!" << endl;
    else cout << endl << "HEROES ARE DEFEATED!" << endl;
}