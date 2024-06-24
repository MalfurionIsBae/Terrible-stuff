#include "party.h"
#include <cstdlib>
#pragma once

character* Party::getMember(int i)
{
    if(partyMembers == nullptr) return nullptr;
    if(i >= party_size) { clog << "Party doesnt have that many members!\n"; return nullptr; }
    return partyMembers[i];
}

void Party::show_party()
{
    for(int i=0;i<party_size;i++)
    {
        cout<<endl;
        if(partyMembers[i] == nullptr ) continue;
        partyMembers[i]->show_stats();
        partyMembers[i]->show_abilities();
    }   
}

Party::~Party()
{
    for(int i=0;i<party_size;i++) { delete partyMembers[i]; }
    delete[] partyMembers; 
}

character* Party::make_char()
{
    srand(time(nullptr));
    character* hero = nullptr;
    string name;
    int p;

    cout << "Name your hero! \n";
    cin >> name;

    cout << "Choose your class! \n";
    cout << "1.Warrior  2.Mage  3.Priest \n";
    cin >> p;
    while(cin.fail() || p <= 0 || p > 3)
    {
        cout << "You must choose a number 1-3! Try again\n";
        cin.clear();
        cin.ignore(100,'\n');
        cin >> p;
    }

    if(p == 1) hero = new Warrior(rand()%500 + 500, rand()%10 + 10, rand()%5 + 5, rand()%20 + 25, rand()%10 + 20, rand()%5 + 5, name);
    else if(p == 2) hero = new Mage(rand()%500 + 100, rand()%10, rand()%5 + 5, rand()%10, rand()%10 + 10, rand()%40 + 20, name);
    else if(p == 3) hero = new Priest(rand()%500 + 200, rand()%15, rand()%5 + 5, rand()%20, rand()%10 + 10, rand()%40 + 20, name);
    return hero;
}

void Party::new_party() 
{ 
    int p;
    cout << "Before the fight you must assemble your team! \n";
    cout << "How many heroes are in your team? \n";
    cin >> p;
    while(cin.fail() || p < 0)
    {
        cout << "You must choose a positive integer! Try again \n";
        cin.clear();
        cin.ignore(100,'\n');
        cin >> p;
    }
    party_size = p;
    partyMembers = new character*[p];
    
    for(int i=0;i<p;i++)
    {
        partyMembers[i] = make_char();
    }
}

bool Party::is_alive()
{
    if(partyMembers == nullptr) return false;

    for(int i=0;i<party_size;i++)
    {
        if(partyMembers[i] != nullptr && partyMembers[i]->is_alive()) return true;
    }
    return false;
}