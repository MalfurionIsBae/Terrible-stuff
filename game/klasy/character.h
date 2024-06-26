#include <iostream>
#include <string>
#include <vector>
#include "ability.h"
#pragma once

using namespace std;

struct stats 
{
    int hp;
    int armor;  
    int dodge;
    int strength;
    int agility;
    int intellect;
};

class character
{
private : 
    string name;
    string klass;
    stats stat;
    bool alive;
protected :
    character* targets; // FOR NOW ONLY 1 TARGET - TO BE CHANGED TO VECTOR OF CHARACTER*
    character** friendlies; // TO BE CHANGED TO VECTOR OF CHARACTER*
    vector<Ability*> abilities; 
public :
    int f_size; // ONLY FOR NOW
// CONSTRUCTOR
    character(int hp, int armor, int dodge, int strength, int agility, int intellect, string name)
    : name(name), stat{hp, armor, dodge, strength, agility, intellect}, alive(true), klass("") {};
    ~character() { abilities.clear(); };

// GETTERS
    string getName() { return name; };
    string getKlass() { return klass; };
    int getHp() { return stat.hp; };
    int getArmor() { return stat.armor; };
    int getDodge() { return stat.dodge; };
    int getStr() { return stat.strength; };
    int getAgi() { return stat.agility; };
    int getInt() { return stat.intellect; };
    Ability* getAbility(int i);
    int abilityCount() { return abilities.size(); };

// SETTERS
    void setKlass(string s) { klass = s; };
    void setHp(int hp);
    void setTargets(character* boss); // TO BE CHANGED - RIGHT NOW ONLY SINGLE TARGET(BOSS)
    void setFriendlies(character** friends, int i);

// OTHERS
    void kill() { alive = false; cout << name <<" dies! \n" << endl; };
    bool is_alive() { return alive; };
    void show_abilities();
    void show_stats();
};