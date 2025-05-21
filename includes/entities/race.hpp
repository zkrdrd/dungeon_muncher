// #ifdef RACE
// #define RACE
// #endif

#pragma once

class Race {
    private:
        int level;
        int HP;
        int maxHP;
        int strength;
        int dexterity;
        int intelligence;
        int hunger;
        int rateHunger;
        int maxHunger = 100;
        int fatigue;
        int rateFatigue;
        int maxFatigue = 100;
        int damage;

    public:
        Race(){}
        void setLevel(int value){
            level = value;
        }
        int getLevel(){
            return level;
        }
        void setHP(int value){
            HP = value;
        }
        int getHP(){
            return HP;
        }
        void setMaxHP(int value){
            maxHP = value;
        }
        int getMaxHP(){
            return maxHP;
        }
        void setStrength(int value){
            strength = value;
        }
        int getStrength(){
            return strength;
        }
        void setDexterity(int value){
            dexterity = value;
        }
        int getDexterity(){
            return dexterity;
        }
        void setIntelligence(int value){
            intelligence = value;
        }
        int getIntelligence(){
            return intelligence;
        }
        void setHunger(int value){
            hunger = value;
        }
        int getHunger(){
            return hunger;
        }
        void setRateHunger(int value){
            rateHunger = value;
        }
        int getRateHunger(){
            return rateHunger;
        }
        void setMaxHunger(int value){
            maxHunger = value;
        }
        int getMaxHunger(){
            return maxHunger;
        }
        void setFatigue(int value){
            fatigue = value;
        }
        int getFatigue(){
            return fatigue;
        }
        void setRateFatigue(int value){
            rateFatigue = value;
        }
        int getRateFatigue(){
            return rateFatigue;
        }
        void setMaxFatigue(int value){
            maxFatigue = value;
        }
        int getMaxFatigue(){
            return maxFatigue;
        }
        void setDamage(int value){
            damage = value;
        }
        int getDamage(){
            return damage;
        }        
};
