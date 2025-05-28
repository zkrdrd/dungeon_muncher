#pragma once
#include "stats.hpp"
#include "health.hpp"
#include "needs.hpp"

template <typename TStats = int,
          typename TName = std::string,
          typename TNeeds = int,
          typename THP = int>
// requires std::is_same_v<TStats, int>

// requires std::is_same_v<TStats, int> && std::is_arithmetic_v<THP>
class Character
{
private:
    Stats<TStats, TName> stats_;
    Needs<TNeeds> needs_;
    Health<THP> thp_;

public:
    Character() = default;
    ~Character() = default;
    // Делегируем методы Stats
    void set_character_name(const TName &name) noexcept;

    [[nodiscard]] TName get_character_name() const noexcept;

    void set_level(TStats value) noexcept;

    [[nodiscard]] TStats get_level() const noexcept;

    void set_strength(TStats value) noexcept;

    [[nodiscard]] TStats get_strength() const noexcept;

    void set_dexterity(TStats value) noexcept;

    [[nodiscard]] TStats get_dexterity() const noexcept;

    void set_intelligence(TStats value) noexcept;

    [[nodiscard]] TStats get_intelligence() const noexcept;

    void set_damage(TStats value) noexcept;

    [[nodiscard]] TStats get_damage() const noexcept;

    void set_physical_protection(TStats value) noexcept;

    [[nodiscard]] TStats get_physical_protection() const noexcept;

    void set_magical_protection(TStats value) noexcept;

    [[nodiscard]] TStats get_magical_protection() const noexcept;

    void set_hunger(TNeeds value) noexcept;

    [[nodiscard]] TNeeds get_hunger() const noexcept;

    void set_rate_hunger_one_turn(TNeeds value) noexcept;

    [[nodiscard]] TNeeds get_rate_hunger_one_turn() const noexcept;

    void set_max_hunger(TNeeds value) noexcept;

    [[nodiscard]] TNeeds get_max_hunger() const noexcept;

    void set_fatigue(TNeeds value) noexcept;

    [[nodiscard]] TNeeds get_fatigue() const noexcept;

    void set_rate_fatigue_one_turn(TNeeds value) noexcept;

    [[nodiscard]] TNeeds get_rate_fatigue_one_turn() const noexcept;

    void set_max_fatigue(TNeeds value) noexcept;

    [[nodiscard]] TNeeds get_max_fatigue() const noexcept;
    
    void set_hp(THP value) noexcept;

    [[nodiscard]] THP get_hp() const noexcept;

    void set_max_hp(THP value) noexcept;

    [[nodiscard]] THP get_max_hp() const noexcept;

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