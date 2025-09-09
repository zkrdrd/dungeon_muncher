#include <iostream>

constexpr bool is_value_non_negative(int value) noexcept { return value >= 0; }

// Устанавливает имя персонажа.
/// @param value Имя мерсоанжа string.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_character_name(const TName &name) noexcept
{
    stats_.set_person_name(name);
}
/// Возвращает имя персонажа string.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TName Character<TStats, TName, TNeeds, THP>::get_character_name() const noexcept
{
    return stats_.get_person_name();
}

// Устанавливает опыт песонажа.
/// @param value Опыт (должен быть >= 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_experience(TStats value) noexcept
{
    stats_.set_experience(value);
}

/// Возвращает опыт персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_experience() const noexcept
{
    return stats_.get_experience();
}

// Устанавливает уровень персонажа.
/// @param value Новый уровень (должен быть >= 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_level(TStats value) noexcept
{
    stats_.set_level(value);
}
/// Возвращает уровень персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_level() const noexcept
{
    return stats_.get_level();
}

// Устанавливает силу персонажа.
/// @param value Сила персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_strength(TStats value) noexcept
{
    stats_.set_strength(value);
}
/// Возвращает силу персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_strength() const noexcept
{
    return stats_.get_strength();
}

// Устанавливает ловкость персонажа.
/// @param value Ловкость персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_dexterity(TStats value) noexcept
{
    stats_.set_dexterity(value);
}
/// Возвращает силу персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_dexterity() const noexcept
{
    return stats_.get_dexterity();
}

// Устанавливает интелект персонажа.
/// @param value Интелект персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_intelligence(TStats value) noexcept
{
    stats_.set_intelligence(value);
}
/// Возвращает интелект персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_intelligence() const noexcept
{
    return stats_.get_intelligence();
}

// Устанавливает урон персонажа.
/// @param value Урон персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_damage(TStats value) noexcept
{
    stats_.set_damage(value);
}
/// Возвращает урон персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_damage() const noexcept
{
    return stats_.get_damage();
}

// Устанавливает физическую защиту персонажа.
/// @param value Физическая защита персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_physical_protection(TStats value) noexcept
{
    stats_.set_physical_protection(value);
}
/// Возвращает физическую защиту персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_physical_protection() const noexcept
{
    return stats_.get_physical_protection();
}

// Устанавливает магическую защиту персонажа.
/// @param value Магическую защита персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_magical_protection(TStats value) noexcept
{
    stats_.set_magical_protection(value);
}
/// Возвращает магическую защиту персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TStats Character<TStats, TName, TNeeds, THP>::get_magical_protection() const noexcept
{
    return stats_.get_magical_protection();
}

// Устанавливает голод персонажа.
/// @param value Голод персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_hunger(TNeeds value) noexcept
{
    if (is_value_non_negative(value))
    {
        needs_.set_hunger(value);
    }
}
/// Возвращает магическую защиту персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_hunger() const noexcept
{
    return needs_.get_hunger();
}

// Устанавливает уровень повышения голода за один ход персонажа.
/// @param value уровень повышения голода за один ход (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_rate_hunger_one_turn(TNeeds value) noexcept
{
    if (is_value_non_negative(value))
    {
        needs_.set_rate_hunger_one_turn(value);
    }
}
/// Возвращает уровень повышения голода за один ход персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_rate_hunger_one_turn() const noexcept
{
    return needs_.get_rate_hunger_one_turn();
}

// Устанавливает максимальный голод персонажа.
/// @param value Максимальный голод персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_max_hunger(TNeeds value) noexcept
{
    if (is_value_non_negative(value))
    {
        needs_.set_max_hunger(value);
    }
}
/// Возвращает максимальный голод персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_max_hunger() const noexcept
{
    return needs_.get_max_hunger();
}

// Устанавливает усталость персонажа.
/// @param value Усталость персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_fatigue(TNeeds value) noexcept
{
    if (is_value_non_negative(value))
    {
        needs_.set_fatigue(value);
    }
}
/// Возвращает усталость персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_fatigue() const noexcept
{
    return needs_.get_fatigue();
}

// Устанавливает максимальный уровень повышения усталости за один ход персонажа.
/// @param value Максимальный уровень повышения усталости за один ход персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_rate_fatigue_one_turn(TNeeds value) noexcept
{
    if (is_value_non_negative(value))
    {
        needs_.set_rate_fatigue_one_turn(value);
    }
}
/// Возвращает уровень повышения усталости за один ход персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_rate_fatigue_one_turn() const noexcept
{
    return needs_.get_rate_fatigue_one_turn();
}

// Устанавливает максимальная усталость персонажа.
/// @param value Максимальная усталость персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_max_fatigue(TNeeds value) noexcept
{
    if (is_value_non_negative(value))
    {
        needs_.set_max_fatigue(value);
    }
}
/// Возвращает максимальную усталость персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] TNeeds Character<TStats, TName, TNeeds, THP>::get_max_fatigue() const noexcept
{
    return needs_.get_max_fatigue();
}

// Устанавливает уровень здоровья персонажа.
/// @param value Уровень здоровья персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_hp(THP value) noexcept
{
    if (is_value_non_negative(value))
    {
        thp_.set_hp(value);
    }
}
/// Возвращает уровень здоровья персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] THP Character<TStats, TName, TNeeds, THP>::get_hp() const noexcept
{
    return thp_.get_hp();
}

// Устанавливает максимальный уровень здоровья персонажа.
/// @param value Максимальный ровень здоровья персонажа (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::set_max_hp(THP value) noexcept
{
    if (is_value_non_negative(value) && thp_.get_hp() <= value)
    {
        thp_.set_max_hp(value);
    }
}
/// Возвращает максимальный уровень здоровья персонажа int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[nodiscard]] THP Character<TStats, TName, TNeeds, THP>::get_max_hp() const noexcept
{
    return thp_.get_max_hp();
}

// Нанесение урона по персонажу
/// @param value Урон от противника по персонажу (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::take_damage(THP value) noexcept
{
    if (is_value_non_negative(value))
    {
        int hp = thp_.get_hp() - value;
        if (hp <= 0)
        {
            thp_.set_hp(0);
            // todo
            // персонаж умер
            // вызвать функцию
        }
        else
        {
            thp_.set_hp(hp);
        }
    }
}

// Исцепление персонажа
/// @param value Исцеление по персонажу (value > 0) int.
template <typename TStats, typename TName, typename TNeeds, typename THP>
void Character<TStats, TName, TNeeds, THP>::healing(THP value) noexcept
{
    if (is_value_non_negative(value))
    {
        // THP hp = thp_.get_hp();
        thp_.set_hp(std::min(thp_.get_hp() + value, thp_.get_max_hp()));
    }
}

// Персонаж умер
// реализовать функцию
template <typename TStats, typename TName, typename TNeeds, typename THP>
[[maybe_unused]] void Character<TStats, TName, TNeeds, THP>::death() noexcept
{
}
