#pragma once
#include "race.hpp"

class Human: public Race{
    public:
        Human();
        ~Human();
        struct HumanStats{
            int Level;
            int MaxHP;
            int HP;
            int Strength;
            int Dexterity;
            int Intelligence;
            int Hunger;
            int Fatigue;
            int Damage;
        
            void DisplayStats();
        };
        HumanStats GetHuman();
};
