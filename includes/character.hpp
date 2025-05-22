#pragma once
#include "Stats.hpp"
//#include "Health.hpp"
#include <concepts>

template <typename TStats = int, 
          typename TName = std::string> 
         // typename THP = int>
         // requires std::is_same_v<TStats, int> 

    //requires std::is_same_v<TStats, int> && std::is_arithmetic_v<THP>
class Character {
    private:
        Stats<TStats, TName> stats_;
        //Health<THP> health_;

    public:
    Character() = default;

    // Делегируем методы Stats
    void setCharacterName(const TName& name) noexcept {
        stats_.setPersonName(name);
    }

    [[nodiscard]] TName getCharacterName() const noexcept {
        return stats_.getPersonName();
    }

    void setLevel(TStats level) noexcept {
        stats_.setLevel(level);
    }

    // // Делегируем методы Health
    // void setHP(THP value) noexcept {
    //     health_.setHP(value);
    // }

    // [[nodiscard]] THP getHP() const noexcept {
    //     return health_.getHP();
    // }

    // // Комбинированная логика
    // void applyDamage(THP damage) noexcept {
    //     health_.setHP(health_.getHP() - damage);
    //     if (health_.getHP() <= 0) {
    //         stats_.setLevel(0); // Персонаж "умер"
    //     }
    // }

    // // Генерация операторов сравнения (C++20)
    // auto operator<=>(const Character&) const = default;
};