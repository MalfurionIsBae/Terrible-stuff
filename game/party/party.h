#include "warrior.h"
#include "mage.h"
#include "priest.h"
#pragma once

class Party 
{
private :
    int party_size;
    character** partyMembers;

    character* make_char();
public : 
    Party() : partyMembers(nullptr), party_size(0) {};
    ~Party();

    int getPartySize() { return party_size; };
    character* getMember(int i);
    character** getParty() { return partyMembers; };
    void new_party();
    void show_party();
    bool is_alive();
};