#include "character.h"
#pragma once

void character::show_stats()
{
    cout << name << endl;
    cout << "Hp : " << getHp() << " ; " <<
            "Armor : " << getArmor() << " ; " <<
            "Dodge chance : " << getDodge() << "%" << " ; " <<
            "Strength : " << getStr() << " ; " <<
            "Agility : " << getAgi() << " ; " <<
            "Intellect : " << getInt() << "\n";
}

void character::show_abilities()
{
    for(int i=0;i<abilities.size();i++)
    {
        cout << i;
        abilities.at(i)->description();
    }
}

Ability* character::getAbility(int i)
{
    if(i < 0 || i >= abilities.size()) 
    {
        cerr << "Error : Cant find ability \n";
        return nullptr;
    }
    return abilities.at(i);
}

void character::setHp(int new_hp) 
{
    if(new_hp < 0) { stat.hp = 0; kill(); }
    else { stat.hp = new_hp; } 
}

void character::setTargets(character* boss)
{
    targets = boss;
}

void character::setFriendlies(character** friends, int size)
{
    friendlies = friends;
    f_size = size;
}