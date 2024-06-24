#include "encounter.h"
#pragma once

void Encounter::begin()
{
    srand(time(nullptr));

    heroes.new_party();
    heroes.show_party();

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
          
            if(hero->getKlass() == "Warrior")
            {
                Warrior* warr = dynamic_cast<Warrior*>(hero);
                if(warr == nullptr) { cerr << "Error - failed cast to subclass \n"; continue; }
                warr->show_stats();
                warr->show_abilities();

                int p = 0;
                while(p < 1 || p > 3)
                {
                    cout << " Choose number 1-3!\n";
                    cin >> p;
                    cout << endl;
                }

                if(p == 1) warr->bash(&boss);
                else if(p == 2) warr->reckless_strike(&boss);
                else warr->overpower(&boss);
            }
            else if(hero->getKlass() == "Mage")
            {
                Mage* mag = dynamic_cast<Mage*>(hero);
                if(mag == nullptr) { cerr << "Error - failed cast to subclass \n"; continue; }
                mag->show_stats();
                mag->show_abilities();

                int p = 0;
                while(p < 1 || p > 3)
                {
                    cout << " Choose number 1-3!\n";
                    cin >> p;
                    cout << endl;
                }

                if(p == 1) mag->arcane_missile(&boss);
                else if(p == 2) mag->inner_focus();
                else mag->fireball(&boss);
            }
            else if(hero->getKlass() == "Priest")
            {
                Priest* pr = dynamic_cast<Priest*>(hero);
                if(pr == nullptr) { cerr << "Error - failed cast to subclass \n"; continue; }
                pr->show_stats();
                pr->show_abilities();

                int p = 0;
                while(p < 1 || p > 2)
                {
                    cout << " Choose number 1-2!\n";
                    cin >> p;
                    cout << endl;
                }

                if(p == 1)
                {
                    int i = 0;
                    cout << "Choose party member from 1 - " << heroes.getPartySize() << endl;
                    while(i <= 0 || i > heroes.getPartySize())
                    {
                        cin.clear();
                        cin >> i;
                    }
                    pr->heal(heroes.getMember(i-1));
                }
                else pr->mass_heal(heroes.getParty(), heroes.getPartySize());
            }
        }
    }

    if( heroes.is_alive()) cout << endl << "HEROES ARE VICTORIUS!" << endl;
    else cout << endl << "HEROES ARE DEFEATED!" << endl;
}