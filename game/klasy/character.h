#include <iostream>
#include <string>
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
public :
    character(int hp, int armor, int dodge, int strength, int agility, int intellect, string name)
    : name(name), stat{hp, armor, dodge, strength, agility, intellect}, alive(true), klass("") {};

    string getName() { return name; };
    void setKlass(string s) { klass = s; };
    string getKlass() { return klass; };
    void setHp(int hp);
    int getHp() { return stat.hp; };
    int getArmor() { return stat.armor; };
    int getDodge() { return stat.dodge; };
    int getStr() { return stat.strength; };
    int getAgi() { return stat.agility; };
    int getInt() { return stat.intellect; };

    void kill() { alive = false; cout << name <<" dies! \n" << endl; };
    bool is_alive() { return alive; };
    virtual void show_abilities() = 0;
    void show_stats();

    //virtual ~character() {}; 
};