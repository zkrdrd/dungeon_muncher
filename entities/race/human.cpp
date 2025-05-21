#include "human.hpp"
#include <iostream>

Human::Human():Race(){
    setLevel(1);
    setMaxHP(50);
    setHP(50);
    setStrength(3);
    setDexterity(3);
    setIntelligence(3);
    setHunger(0);
    setFatigue(0);
    setDamage(1);
};

Human::~Human(){}

void Human::HumanStats::DisplayStats(){
    std::cout << 
    "Level = " << Level << std::endl <<
    "MaxHP = " << MaxHP << std::endl <<
    "HP = " << HP << std::endl <<
    "Strength = " << Strength << std::endl <<
    "Dexterity = " << Dexterity << std::endl <<
    "Intelligence = " << Intelligence << std::endl <<
    "Hunger = " << Hunger << std::endl <<
    "Fatigue = " << Fatigue << std::endl <<
    "Damage = " << Damage <<  std::endl <<
    std::endl;
}

Human::HumanStats Human::GetHuman(){
    HumanStats humanStats;
    humanStats.Level = getLevel();
    humanStats.MaxHP = getMaxHP();
    humanStats.HP = getHP();
    humanStats.Strength = getStrength();
    humanStats.Dexterity = getDexterity();
    humanStats.Intelligence = getIntelligence();
    humanStats.Hunger = getHunger();
    humanStats.Fatigue = getFatigue();
    humanStats.Damage = getDamage();
    return humanStats;
}

// void Human::GetHuman(int& Level, int& MaxHP, int& HP, int& Strength, 
//     int& Dexterity, int& Intelligence, int& Hunger, 
//     int& Fatigue, int& Damage) {
//     Level = getLevel();
//     MaxHP = getMaxHP();
//     HP = getHP();
//     Strength = getStrength();
//     Dexterity = getDexterity();
//     Intelligence = getIntelligence();
//     Hunger = getHunger();
//     Fatigue = getFatigue();
//     Damage = getDamage();
// }
