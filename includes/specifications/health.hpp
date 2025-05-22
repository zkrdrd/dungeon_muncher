// #ifdef RACE
// #define RACE
// #endif

#pragma once

template <int THP>
class Health {
    private:
        THP HP;
        THP maxHP;

    public:
        Health();
        ~Health();
        void setHP(THP value){
            HP = value;
        }
        THP getHP(){
            return HP;
        }
        void setMaxHP(THP value){
            maxHP = value;
        }
        THP getMaxHP(){
            return maxHP;
        }
};
