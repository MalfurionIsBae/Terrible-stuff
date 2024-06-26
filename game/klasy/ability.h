#pragma once

class Ability
{
private :
    int uses;
public :
    Ability() : uses(0) {};
    virtual void use() = 0;
    virtual void description() = 0;
};