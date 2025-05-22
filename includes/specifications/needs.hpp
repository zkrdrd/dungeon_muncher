// #ifdef RACE
// #define RACE
// #endif

#pragma once

template <int T>
class Needs {
    private:
        T hunger;
        T rateHungerOneTurn;
        T maxHunger = 100;
        T fatigue;
        T rateFatigueOneTurn;
        T maxFatigue = 100;

    public:
        Needs(){}
        ~Needs(){}
        void setHunger(T value){
            hunger = value;
        }
        T getHunger(){
            return hunger;
        }
        void setRateHunger(T value){
            rateHunger = value;
        }
        T getRateHunger(){
            return rateHunger;
        }
        void setMaxHunger(T value){
            maxHunger = value;
        }
        T getMaxHunger(){
            return maxHunger;
        }
        void setFatigue(T value){
            fatigue = value;
        }
        T getFatigue(){
            return fatigue;
        }
        void setRateFatigue(T value){
            rateFatigue = value;
        }
        T getRateFatigue(){
            return rateFatigue;
        }
        void setMaxFatigue(T value){
            maxFatigue = value;
        }
        T getMaxFatigue(){
            return maxFatigue;
        }    
};
