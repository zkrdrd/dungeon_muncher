// #ifdef RACE
// #define RACE
// #endif

#pragma once

template <typename THP = int>
class Health
{
private:
    THP health_points_;
    THP max_health_points_;

public:
    // Конструктор
    Health() = default;

    // Деструктор
    ~Health() = default;

    // Установить текущий уровень здоровья
    // Функция принимает целое число
    void set_hp(THP value) noexcept
    {
        health_points_ = value;
    }

    // Получить текущий уровень здоровья
    // Функция возвращает целое число
    [[nodiscard]] THP get_hp() const noexcept
    {
        return health_points_;
    }

    // Установить максимальный уровень здоровья
    // Функция принимает целое число
    void set_max_hp(THP value) noexcept
    {
        max_health_points_ = value;
    }

    // Получить максимальный уровень здоровья
    // Функция возвращает целое число
    [[nodiscard]] THP get_max_hp() const noexcept
    {
        return max_health_points_;
    }
};
