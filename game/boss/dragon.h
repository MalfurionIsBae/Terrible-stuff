#include "party.h"
#pragma once

class Dragon : public character
{
public :
    Dragon() : character(5000, 25, 20, 50, 30, 50, "Asmodeus" ) {};
    void swipe(Party& heroes);
    void flame_breath(Party& heroes);
    void show_abilities();
};