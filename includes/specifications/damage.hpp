// #ifdef RACE
// #define RACE
// #endif

#pragma once

template <int T>
class Damage {
    private:
        T damage;

    public:
        Damage(){}
        ~Damage(){}
        void setDamage(T value){
            damage = value;
        }
        T getDamage(){
            return damage;
        }        
};
