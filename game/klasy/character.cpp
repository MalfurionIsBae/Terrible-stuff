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

void character::setHp(int new_hp) 
{
    if(new_hp < 0) { stat.hp = 0; kill(); }
    else { stat.hp = new_hp; } 
}
