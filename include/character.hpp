#pragma once
#include "stats.hpp"
#include "health.hpp"
#include "needs.hpp"

template <typename TStats = int, 
          typename TName = std::string,
          typename TNeeds = int,
          typename THP = int>
         // requires std::is_same_v<TStats, int> 

    //requires std::is_same_v<TStats, int> && std::is_arithmetic_v<THP>
class Character {
    private:
        Stats<TStats, TName> stats_;
        Needs<TNeeds> needs_;
        Health<THP> thp_;

        //Health<THP> health_;

    public:
    Character() = default;

    // Делегируем методы Stats
    void set_character_name(const TName& name) noexcept;

    [[nodiscard]] TName get_character_name() const noexcept;

    void set_level(TStats level_) noexcept;

    // // Делегируем методы Health
    // void setHP(THP value) noexcept {
    //     health_.setHP(value);
    // }

    // [[nodiscard]] THP getHP() const noexcept {
    //     return health_.getHP();
    // }

    // // Комбинированная логика
    // void applyDamage(THP damage_) noexcept {
    //     health_.setHP(health_.getHP() - damage_);
    //     if (health_.getHP() <= 0) {
    //         stats_.setLevel(0); // Персонаж "умер"
    //     }
    // }

    // // Генерация операторов сравнения (C++20)
    // auto operator<=>(const Character&) const = default;
};

// Предварительное объявление явной инстанциации
extern template class Character<int, std::string, int, int>;

// Подключение реализации
#include "detail/character.tpp"